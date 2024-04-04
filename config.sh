# To set up your config on OS X or Linux, copy this file to config.sh and
# change the values below accordingly. All paths must be absolute paths!
# On Linux, remember to wrap all variables in ${}, so that they can
# be used in the Makefile.

# Path to the main AIR SDK directory, so that $AIR_SDK/bin/adt exists.
AIR_SDK="${HOME}/FRESteamWorks-64/AirSDK"
# Path to the Steam SDK, so that $STEAM_SDK/redistributable_bin exists.
STEAM_SDK="${HOME}/FRESteamWorks-64/SteamSDK"
# FTP path to upload the built binaries to when running builds/build.sh.
# Version number gets appended to the path. Binaries will not be uploaded
# if left commented or set to an empty value.
#UPLOAD_URL="ftp://example.org/FRESteamWorks"
