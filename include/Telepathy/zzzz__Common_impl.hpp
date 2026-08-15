#pragma once
// IWYU pragma private; include "Telepathy/Common.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Telepathy/zzzz__Common_def.hpp"
//  Writing Method size for method: ::Telepathy::Common._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Telepathy::Common::*)(int32_t)>(&::Telepathy::Common::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e584c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Common*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Telepathy::Common::__cordl_internal_get_NoDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoDelay;
}
constexpr bool const& Telepathy::Common::__cordl_internal_get_NoDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NoDelay;
}
constexpr void Telepathy::Common::__cordl_internal_set_NoDelay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NoDelay = value;
}
constexpr int32_t& Telepathy::Common::__cordl_internal_get_MaxMessageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMessageSize;
}
constexpr int32_t const& Telepathy::Common::__cordl_internal_get_MaxMessageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMessageSize;
}
constexpr void Telepathy::Common::__cordl_internal_set_MaxMessageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxMessageSize = value;
}
constexpr int32_t& Telepathy::Common::__cordl_internal_get_SendTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendTimeout;
}
constexpr int32_t const& Telepathy::Common::__cordl_internal_get_SendTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SendTimeout;
}
constexpr void Telepathy::Common::__cordl_internal_set_SendTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SendTimeout = value;
}
constexpr int32_t& Telepathy::Common::__cordl_internal_get_ReceiveTimeout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveTimeout;
}
constexpr int32_t const& Telepathy::Common::__cordl_internal_get_ReceiveTimeout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReceiveTimeout;
}
constexpr void Telepathy::Common::__cordl_internal_set_ReceiveTimeout(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReceiveTimeout = value;
}
inline void Telepathy::Common::_ctor(int32_t  MaxMessageSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Telepathy::Common*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, MaxMessageSize);
}
inline ::Telepathy::Common* Telepathy::Common::New_ctor(int32_t  MaxMessageSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Telepathy::Common*>(MaxMessageSize));
}
// Ctor Parameters []
constexpr ::Telepathy::Common::Common()   {
}
