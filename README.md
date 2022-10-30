- Clean temp files and cache
```bash
find ./ -name "*.ii" -exec rm -rf {} \;
find . -name "*.o" -exec rm -rf {} \;
find . -name "*.i" -exec rm -rf {} \;
find . -name "*.s" -exec rm -rf {} \;
# rm -rf *.o *.ii *.s
```