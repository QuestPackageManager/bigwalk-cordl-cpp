#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/TinyJson/SerializeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/Utils/Libraries/TinyJson/zzzz__SerializeAttribute_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Libraries::TinyJson::SerializeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Libraries::TinyJson::SerializeAttribute::*)()>(&::Rewired::Utils::Libraries::TinyJson::SerializeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::TinyJson::SerializeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Rewired::Utils::Libraries::TinyJson::SerializeAttribute::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& Rewired::Utils::Libraries::TinyJson::SerializeAttribute::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void Rewired::Utils::Libraries::TinyJson::SerializeAttribute::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
inline void Rewired::Utils::Libraries::TinyJson::SerializeAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::TinyJson::SerializeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Libraries::TinyJson::SerializeAttribute* Rewired::Utils::Libraries::TinyJson::SerializeAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Libraries::TinyJson::SerializeAttribute*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Libraries::TinyJson::SerializeAttribute::SerializeAttribute()   {
}
