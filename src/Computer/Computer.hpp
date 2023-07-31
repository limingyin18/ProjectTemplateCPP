#pragma once

namespace ProjectTemplate
{
/**
 * @brief Computer class
 */
template <class T> class Computer
{
  protected:
    T a_, b_;

  public:
    Computer() = default;
    virtual ~Computer() = default;

    virtual T Compute() = 0;

    void SetA(int a)
    {
        a_ = a;
    };
    void SetB(int b)
    {
        b_ = b;
    };
    [[nodiscard]] T GetA() const
    {
        return a_;
    };
    [[nodiscard]] T GetB() const
    {
        return b_;
    };
};

/**
 * @brief Add class
 */
template <class T> class Add : public Computer<T>
{
    T Compute() override
    {
        return this->a_ + this->b_;
    };
};
} // namespace ProjectTemplate
