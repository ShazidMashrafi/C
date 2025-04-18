#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("test.txt","w"); //check coomment at the end of the code
    if(file==NULL)
        printf("File doesn't exist");
    else
    {
        printf("File is opened");
        fclose(file);
    }
}

/*
    Mode	                Meaning of Mode	                                During Inexistence of file


    r	                    Open for reading.	                        If the file does not exist, fopen() returns NULL.

    rb	           Open for reading in binary mode.	                If the file does not exist, fopen() returns NULL.

    w	                    Open for writing.	                    If the file exists, its contents are overwritten.
                                                                    If the file does not exist, it will be created.

    wb	           Open for writing in binary mode.	                If the file exists, its contents are overwritten.
                                                                    If the file does not exist, it will be created.

    a	                    Open for append.                        If the file does not exist, it will be created.
                    Data is added to the end of the file.

    ab	              Open for append in binary mode.               If the file does not exist, it will be created.
                    Data is added to the end of the file.	

    r+	            Open for both reading and writing.	            If the file does not exist, fopen() returns NULL.

    rb+	    Open for both reading and writing in binary mode.	    If the file does not exist, fopen() returns NULL.

    w+	        Open for both reading and writing.	                If the file exists, its contents are overwritten.
                                                                    If the file does not exist, it will be created.

    wb+	    Open for both reading and writing in binary mode.	    If the file exists, its contents are overwritten.
                                                                    If the file does not exist, it will be created.

    a+	        Open for both reading and appending.	            If the file does not exist, it will be created.

    ab+     Open for both reading and appending in binary mode.	    If the file does not exist, it will be created.
    */