-- ejercicio 1
data Carrera = Matematica | Fisica | Computacion | Astronomia
    deriving (Eq, Ord) -- ejercicio 2 a)

titulo :: Carrera -> String 
titulo a = case a of 
            Matematica -> "Licenciatura en Matemática"
            Fisica -> "Licenciatura en Física"
            Computacion -> "Licenciatura en Computación"
            _ -> "Licenciatura en Astronomía"

-- ejercicio 3 a)
type Ingreso = Int 
data Cargo = Titular | Asociado | Adjunto | Asistente | Auxiliar
            deriving Eq 

data Area = Administrativa | Ensenanza | Economica | Postgrado

data Persona =    Decano 
                | Estudiante Carrera Ingreso
                | Nodocente Area 
                | Docente Cargo 
                
-- b) Docente :: Cargo -> Persona

-- c y d) 
esDocente :: Cargo -> Persona -> Bool
esDocente k a = case a of 
                Docente c -> c == k 
                _ -> False

cuantos_doc :: [Persona] -> Cargo -> Int
cuantos_doc xs c = length (filter (esDocente c) xs) 

-- ejercicio 4 

primerElemento :: [a] -> Maybe a 
primerElemento [] = Nothing 
primerElemento (x:xs) = Just x

-- ejercicio 5 a)
data Cola = VaciaC | Encolada Persona Cola

atender :: Cola -> Maybe Cola 
atender cs = case cs of 
                VaciaC -> Nothing 
                Encolada k ks -> Just ks 

encolar :: Persona -> Cola -> Cola 
encolar persona cola = case cola of 
                        VaciaC -> Encolada persona cola
                        Encolada c cs -> Encolada c (encolar persona cs)

busca :: Cola -> Cargo -> Maybe Persona
busca VaciaC _ = Nothing
busca (Encolada p ps) cargo = case p of
                                Docente c -> comprobarCargo cargo c ps 
                                _ -> busca ps cargo 

comprobarCargo cargo c ps | cargo == c = Just (Docente c)
                          | otherwise = busca ps cargo

-- Cola es parecido a [Persona], y se construye de la misma forma pero [Persona] tiene más funciones pre definidas y por ende es mas facil de manipular

-- ejercicio 6 
data ListaAsoc a b = Vacia | Nodo a b (ListaAsoc a b)
        deriving Show 

-- a) type GuiaTelefonica = ListaAsoc Int String 
-- b) 
la_long :: ListaAsoc a b -> Int 
la_long Vacia = 0 
la_long (Nodo a b lista) = 1 + la_long lista

la_concat :: ListaAsoc a b -> ListaAsoc a b -> ListaAsoc a b 
la_concat lista1 listaBase = case lista1 of 
                            Vacia -> listaBase 
                            Nodo a b (lista2) -> Nodo a b (la_concat lista2 listaBase) 

la_pares :: ListaAsoc a b -> [(a , b)]
la_pares lista = case lista of 
                    Vacia -> []
                    Nodo a b lista2 -> (a , b) : (la_pares lista2)

la_busca :: Eq a => ListaAsoc a b -> a -> Maybe b 
la_busca lista clave = case lista of 
                        Nodo a b lista2 -> compararClave (a,b) clave lista2 
                        Vacia -> Nothing 

compararClave (a , b) clave lista | a == clave = Just b 
                                  | otherwise = la_busca lista clave 

la_borrar :: Eq a => a -> ListaAsoc a b -> ListaAsoc a b 
la_borrar _ Vacia = Vacia 
la_borrar clave (Nodo a b nodos) | a == clave = la_borrar clave nodos
                                 | otherwise = Nodo a b (la_borrar clave nodos)