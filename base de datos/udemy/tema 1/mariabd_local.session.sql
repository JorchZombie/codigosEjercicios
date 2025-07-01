-- AdventureWorks2022.Person.Person
SELECT
	*
FROM
	AdventureWorks2022.Person.Person AS a
WHERE -- filtro
	--a.BusinessEntityID  = 4
	-- a.LastName = 'Sánchez'
	--AND a.EmailPromotion = 1
	-- OR a.EmailPromotion = 1
	a.ModifiedDate = '2007-12-30 00:00:00.000'