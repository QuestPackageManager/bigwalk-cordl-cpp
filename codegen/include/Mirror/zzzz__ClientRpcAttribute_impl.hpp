#pragma once
// IWYU pragma private; include "Mirror/ClientRpcAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Mirror/zzzz__ClientRpcAttribute_def.hpp"
//  Writing Method size for method: ::Mirror::ClientRpcAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::ClientRpcAttribute::*)()>(&::Mirror::ClientRpcAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1812e5480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ClientRpcAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Mirror::ClientRpcAttribute::__cordl_internal_get_channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr int32_t const& Mirror::ClientRpcAttribute::__cordl_internal_get_channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr void Mirror::ClientRpcAttribute::__cordl_internal_set_channel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channel = value;
}
constexpr bool& Mirror::ClientRpcAttribute::__cordl_internal_get_includeOwner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeOwner;
}
constexpr bool const& Mirror::ClientRpcAttribute::__cordl_internal_get_includeOwner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___includeOwner;
}
constexpr void Mirror::ClientRpcAttribute::__cordl_internal_set_includeOwner(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___includeOwner = value;
}
inline void Mirror::ClientRpcAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::ClientRpcAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Mirror::ClientRpcAttribute* Mirror::ClientRpcAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::ClientRpcAttribute*>());
}
// Ctor Parameters []
constexpr ::Mirror::ClientRpcAttribute::ClientRpcAttribute()   {
}
