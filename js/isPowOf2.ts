function isPowOf2(num: number): boolean {
   return (num & (num - 1)) === 0;
}