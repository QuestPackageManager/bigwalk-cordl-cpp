#pragma once
// IWYU pragma private; include "Rewired/Utils/Libraries/TinyJson/DoNotSerializeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "Rewired/Utils/Libraries/TinyJson/zzzz__DoNotSerializeAttribute_def.hpp"
//  Writing Method size for method: ::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute::*)()>(&::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute* Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute*>());
}
// Ctor Parameters []
constexpr ::Rewired::Utils::Libraries::TinyJson::DoNotSerializeAttribute::DoNotSerializeAttribute()   {
}
