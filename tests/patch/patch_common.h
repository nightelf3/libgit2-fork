/* A change in the middle and a deletion of the newline at the end of the file */

#define FILE_CHANGE_MIDDLE_AND_LASTLINE \
	"hey!\n" \
	"this is some context!\n" \
	"around some lines\n" \
	"that will change\n" \
	"yes it is!\n" \
	"(THIS line is changed!)\n" \
	"and this\n" \
	"is additional context\n" \
	"BELOW it! - (THIS line is changed!)"

#define PATCH_ORIGINAL_TO_CHANGE_MIDDLE_AND_LASTLINE_NOCONTEXT \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..e05d36c 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -6 +6 @@ yes it is!\n" \
	"-(this line is changed)\n" \
	"+(THIS line is changed!)\n" \
	"@@ -9 +9 @@ is additional context\n" \
	"-below it!\n" \
	"+BELOW it! - (THIS line is changed!)\n" \
	"\\ No newline at end of file\n"

#define PATCH_APPEND_NO_NL_IN_OLD_FILE \
	"diff --git a/file.txt b/file.txt\n" \
	"index 9432026..83759c0 100644\n" \
	"--- a/file.txt\n" \
	"+++ b/file.txt\n" \
	"@@ -1,1 +1,1 @@\n" \
	"-foo\n" \
	"\\ No newline at end of file\n" \
	"+foo\n"


#define PATCH_ORIGINAL_NEW_FILE_WITH_SPACE \
	"diff --git a/sp ace.txt b/sp ace.txt\n" \
	"new file mode 100644\n" \
	"index 000000000..789819226\n" \
	"--- /dev/null\n" \
	"+++ b/sp ace.txt\n" \
	"@@ -0,0 +1 @@\n" \
	"+a\n"

#define PATCH_CRLF \
	"diff --git a/test-file b/test-file\r\n" \
	"new file mode 100644\r\n" \
	"index 0000000..af431f2 100644\r\n" \
	"--- /dev/null\r\n" \
	"+++ b/test-file\r\n" \
	"@@ -0,0 +1 @@\r\n" \
	"+a contents\r\n"