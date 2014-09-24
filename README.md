IsInternetConnectedNSIS
=======================

Simple NSIS Plugin To Check For Active Internet Connection

##License##

This source code is public domain and unlicensed, therefore, it can be used and distributed without any restrictions.

##Example##

To check for an internet connection in NSIS, you first must put the "IsInternetConnectedNSIS.dll" in the NSIS plugins folder (usually ``%PROGRAMFILES(X86)\NSIS\Plugins``).

The following shows how to check for an internet connection using NSIS:

> IsInternetConnectedNSIS::IsInternetConnected  
>   Pop $0  
>   IntCmp $0 1 Internet NoInternet  
>   Internet:  
>   ; Internet connection active  
>   NoInternet:  
> ; No internet connection active

##More Info##

If you have a suggestion or comment about this code, please feel free to [contact Little Apps](https://www.little-apps.com/contact.html).