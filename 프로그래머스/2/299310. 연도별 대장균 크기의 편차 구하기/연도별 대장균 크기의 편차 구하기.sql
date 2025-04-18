-- 코드를 작성해주세요
SELECT YEAR(DIFFERENTIATION_DATE) YEAR, (YEAR_MAX - SIZE_OF_COLONY) YEAR_DEV, ID
FROM (
    SELECT *,
    MAX(SIZE_OF_COLONY) OVER (
        PARTITION BY YEAR(DIFFERENTIATION_DATE)
    ) YEAR_MAX FROM ECOLI_DATA
) T ORDER BY 1, 2