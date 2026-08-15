#pragma once
// IWYU pragma private; include "Mirror/CommandAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Mirror/zzzz__CommandAttribute_def.hpp"
//  Writing Method size for method: ::Mirror::CommandAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::CommandAttribute::*)()>(&::Mirror::CommandAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1812e5480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::CommandAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::CommandAttribute::__cordl_internal_get_channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr int32_t const& Mirror::CommandAttribute::__cordl_internal_get_channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr void Mirror::CommandAttribute::__cordl_internal_set_channel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channel = value;
}
constexpr bool& Mirror::CommandAttribute::__cordl_internal_get_requiresAuthority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiresAuthority;
}
constexpr bool const& Mirror::CommandAttribute::__cordl_internal_get_requiresAuthority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___requiresAuthority;
}
constexpr void Mirror::CommandAttribute::__cordl_internal_set_requiresAuthority(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___requiresAuthority = value;
}
inline void Mirror::CommandAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::CommandAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::CommandAttribute* Mirror::CommandAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::CommandAttribute*>());
}
// Ctor Parameters []
constexpr ::Mirror::CommandAttribute::CommandAttribute()   {
}
