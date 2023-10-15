docker buildx create --name multi-arch \
  --platform "linux/arm64,linux/amd64,linux/arm/v7" \
  --driver "docker-container" --bootstrap

# docker buildx create \     
#                 --name builder \
#                 --driver docker-container \
#                 --driver-opt network=host \
#                 --use