#pragma once
// IWYU pragma private; include "MA/Flora/GridCullCounts.hpp"
#include "MA/Flora/zzzz__GridCullCounts_def.hpp"
//  Writing Method size for method: ::MA::Flora::GridCullCounts.get_IsEmpty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::MA::Flora::GridCullCounts::*)()>(&::MA::Flora::GridCullCounts::get_IsEmpty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1814bfd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GridCullCounts>(),
                        {"get_IsEmpty", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool MA::Flora::GridCullCounts::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MA::Flora::GridCullCounts>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "VisibleChunkCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "VisibleInstanceCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::MA::Flora::GridCullCounts::GridCullCounts(int32_t  VisibleChunkCount, int32_t  VisibleInstanceCount) noexcept  {
this->VisibleChunkCount = VisibleChunkCount;
this->VisibleInstanceCount = VisibleInstanceCount;
}
// Ctor Parameters []
constexpr ::MA::Flora::GridCullCounts::GridCullCounts()   {
}
