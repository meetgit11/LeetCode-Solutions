import pandas as pd

def concatenateTables(df1: pd.DataFrame, df2: pd.DataFrame) -> pd.DataFrame:
    #merged_df=pd.merge(df1, df2, on='student_id' how='inner')
    return pd.concat([df1, df2])