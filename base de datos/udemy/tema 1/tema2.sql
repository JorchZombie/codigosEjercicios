/*
 --INTRODUCCION A JOIN
 SELECT
	--*
	a.FirstName,
	b.PhoneNumber,
	c.Name 
FROM 
	AdventureWorks2022.Person.Person AS a
	INNER JOIN AdventureWorks2022.Person.PersonPhone AS b
		ON a.BusinessEntityID = b.BusinessEntityID
	INNER JOIN AdventureWorks2022.Person.PhoneNumberType AS c
		ON b.PhoneNumberTypeID  = c.PhoneNumberTypeID
/*
 *  INNER JOIN
 * PERMITE SELECCIONAR LOS REGISTROS QUE TIENEN VALORES QUE
 * QUE COINCIDAN EN AMBAS TABLAS
 * 
 *  ON
 * HACE LA CONEXION
 * =====================================================>
 */
*/

SELECT
	--*
	a.FirstName,
	b.JobTitle
FROM
	AdventureWorks2022.Person.Person AS a
	LEFT JOIN AdventureWorks2022.HumanResources.Employee AS b
		ON a.BusinessEntityID  = b.BusinessEntityID
		
-- =====================
SELECT 
	*
FROM
	AdventureWorks2022.HumanResources.Employee AS a
	LEFT JOIN AdventureWorks2022.Person.Person AS b
		ON a.BusinessEntityID  = b.BusinessEntityID