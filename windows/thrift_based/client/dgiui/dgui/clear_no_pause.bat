rmdir /s/q "%~dp0Debug"
rmdir /s/q "%~dp0Release"
rmdir /s/q "%~dp0Win32"
rmdir /s/q "%~dp0.vs"
rmdir /s/q "%~dp0..\.vs"

del /s /f /q "%~dp0dgui.vcxproj.user"
