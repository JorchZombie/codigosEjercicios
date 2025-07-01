/*-- FUNCION DE AGRAGACION SUMA => SUM()
SELECT
	--*
	b.Name AS NombreProducto,
	SUM(a.Quantity) AS Cantidad
FROM
	AdventureWorks2022.Production.ProductInventory AS a
	INNER JOIN AdventureWorks2022.Production.Product AS b
		ON a.ProductID  = b.ProductID
WHERE
	b.Name = 'Headset Ball Bearings'
GROUP BY
	b.Name
=====================================>

--  FUNCION DE AGRAGACION COUNT ()
-- EJEMPLO 1
SELECT
	a.EmailPromotion,
	COUNT(a.EmailPromotion) AS Cantidad
FROM
	AdventureWorks2022.Person.Person AS a
GROUP BY
	a.EmailPromotion
	
-- EJEMPLO 2
SELECT
	a.Title,
	COUNT(*) AS Cantidad
FROM
	AdventureWorks2022.Person.Person AS a
GROUP BY
	a.Title

	-- EJEMPLO 3
SELECT
	--a.LastName,
	COUNT(DISTINCT a.LastName) AS Cantidad
FROM
	AdventureWorks2022.Person.Person AS a
=======================================>
-- FUNCION DE AGREGACION AVG()
SELECT
	a.Color,
	AVG(a.ListPrice) AS Promedio
FROM
	AdventureWorks2022.Production.Product AS a
GROUP BY
	a.Color
=======================================>
*/
-- FUNCION DE AGREGACION MAX() / MIN ()
SELECT
	MIN(a.ModifiedDate) AS Minimo,
	MAX(a.ModifiedDate) AS Maximo
FROM
	AdventureWorks2022.Person.Password AS a