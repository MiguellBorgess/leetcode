class Solution:

    def sum(self, num1: int, num2: int) -> int:
        return num1 + num2


def main() -> None:
    solver = Solution()

    assert solver.sum(12, 5) == 17
    assert solver.sum(-10, 4) == -6

    print("Sucesso")


if __name__ == "__main__":
    main()