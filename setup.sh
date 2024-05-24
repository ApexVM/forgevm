# Script to setup this server on RunCode

AVM_DIR="~/.avm/"
MODULES_DIR="~/.avm/modules"
AVM_CONFIG="~/.avm/runcode-avm.conf"
CDN="https://apexvm.snares-gar.ts.net/cdn/"

# Install modules
touch $MODULES_DIR/forgevm.avm
# Get module file from CDN
curl $CDN/files/wika04260/forgevm.avm -o forgevm.avm # Someone has to copy the file there
mv forgevm.avm $MODULES_DIR/forgevm.avm
# Patch avmservice
touch $AVM_DIR/service/modules/local/forgevm.avm
clear
# Show system info
bash $AVM_DIR/.system-info.avm
