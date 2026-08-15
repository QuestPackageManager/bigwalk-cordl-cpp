#pragma once
// IWYU pragma private; include "GlobalNamespace/SaveKeys.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SaveKeys_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaveKeys._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaveKeys::*)()>(&::GlobalNamespace::SaveKeys::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveKeys*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SaveKeys::setStaticF_slotName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "slotName", ::GlobalNamespace::SaveKeys*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SaveKeys::getStaticF_slotName()  {
return ::cordl_internals::getStaticField<::StringW, "slotName", ::GlobalNamespace::SaveKeys*>();
}
inline void GlobalNamespace::SaveKeys::setStaticF_keyLookIdHead(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "keyLookIdHead", ::GlobalNamespace::SaveKeys*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SaveKeys::getStaticF_keyLookIdHead()  {
return ::cordl_internals::getStaticField<::StringW, "keyLookIdHead", ::GlobalNamespace::SaveKeys*>();
}
inline void GlobalNamespace::SaveKeys::setStaticF_keyLookIdTorso(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "keyLookIdTorso", ::GlobalNamespace::SaveKeys*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SaveKeys::getStaticF_keyLookIdTorso()  {
return ::cordl_internals::getStaticField<::StringW, "keyLookIdTorso", ::GlobalNamespace::SaveKeys*>();
}
inline void GlobalNamespace::SaveKeys::setStaticF_keyLookIdLegs(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "keyLookIdLegs", ::GlobalNamespace::SaveKeys*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SaveKeys::getStaticF_keyLookIdLegs()  {
return ::cordl_internals::getStaticField<::StringW, "keyLookIdLegs", ::GlobalNamespace::SaveKeys*>();
}
inline void GlobalNamespace::SaveKeys::setStaticF_keyWalkingProven(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "keyWalkingProven", ::GlobalNamespace::SaveKeys*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SaveKeys::getStaticF_keyWalkingProven()  {
return ::cordl_internals::getStaticField<::StringW, "keyWalkingProven", ::GlobalNamespace::SaveKeys*>();
}
inline void GlobalNamespace::SaveKeys::setStaticF_keyNetworkAddress(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "keyNetworkAddress", ::GlobalNamespace::SaveKeys*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::SaveKeys::getStaticF_keyNetworkAddress()  {
return ::cordl_internals::getStaticField<::StringW, "keyNetworkAddress", ::GlobalNamespace::SaveKeys*>();
}
inline void GlobalNamespace::SaveKeys::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SaveKeys*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaveKeys* GlobalNamespace::SaveKeys::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaveKeys*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaveKeys::SaveKeys()   {
}
