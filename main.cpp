#include <cstdlib>
#include <filesystem>

int main() {
  auto cwd = std::filesystem::current_path();
  printf("%s", cwd.c_str());
   return EXIT_SUCCESS;
}