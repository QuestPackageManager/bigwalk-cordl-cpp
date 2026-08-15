#pragma once
// IWYU pragma private; include "Steamworks/Packsize.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Steamworks/zzzz__Packsize_def.hpp"
#include "Steamworks/zzzz__Packsize_def.hpp"
// Ctor Parameters [CppParam { name: "m_u32", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_u64", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_u16", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_d", ty: "double_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Steamworks::Packsize_ValvePackingSentinel_t::Packsize_ValvePackingSentinel_t(uint32_t  m_u32, uint64_t  m_u64, uint16_t  m_u16, double_t  m_d) noexcept  {
this->m_u32 = m_u32;
this->m_u64 = m_u64;
this->m_u16 = m_u16;
this->m_d = m_d;
}
// Ctor Parameters []
constexpr ::Steamworks::Packsize_ValvePackingSentinel_t::Packsize_ValvePackingSentinel_t()   {
}
//  Writing Method size for method: ::Steamworks::Packsize.Test
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Steamworks::Packsize::Test)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18057e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Packsize*>(),
                        {"Test", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::Packsize::Test()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::Packsize*>(),
                        {"Test", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Steamworks::Packsize::Packsize()   {
}
