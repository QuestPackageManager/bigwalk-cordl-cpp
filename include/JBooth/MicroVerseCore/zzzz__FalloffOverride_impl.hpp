#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/FalloffOverride.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffOverride_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::FalloffOverride._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::FalloffOverride::*)()>(&::JBooth::MicroVerseCore::FalloffOverride::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffOverride*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::FalloffFilter*& JBooth::MicroVerseCore::FalloffOverride::__cordl_internal_get_filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter* const& JBooth::MicroVerseCore::FalloffOverride::__cordl_internal_get_filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filter;
}
constexpr void JBooth::MicroVerseCore::FalloffOverride::__cordl_internal_set_filter(::JBooth::MicroVerseCore::FalloffFilter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filter = value;
}
inline void JBooth::MicroVerseCore::FalloffOverride::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::FalloffOverride*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::FalloffOverride* JBooth::MicroVerseCore::FalloffOverride::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::FalloffOverride*>());
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::FalloffOverride::FalloffOverride()   {
}
