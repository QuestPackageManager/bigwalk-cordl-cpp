#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBankEntry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__SoundBankEntry_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundBankEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBankEntry::*)(::StringW, ::GlobalNamespace::AudioAsset*)>(&::GlobalNamespace::SoundBankEntry::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1803224a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::SoundBankEntry::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& GlobalNamespace::SoundBankEntry::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void GlobalNamespace::SoundBankEntry::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset>& GlobalNamespace::SoundBankEntry::__cordl_internal_get_Asset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr ::UnityW<::GlobalNamespace::AudioAsset> const& GlobalNamespace::SoundBankEntry::__cordl_internal_get_Asset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Asset;
}
constexpr void GlobalNamespace::SoundBankEntry::__cordl_internal_set_Asset(::UnityW<::GlobalNamespace::AudioAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Asset = value;
}
inline void GlobalNamespace::SoundBankEntry::_ctor(::StringW  name, ::GlobalNamespace::AudioAsset*  asset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankEntry*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::AudioAsset*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, asset);
}
inline ::GlobalNamespace::SoundBankEntry* GlobalNamespace::SoundBankEntry::New_ctor(::StringW  name, ::GlobalNamespace::AudioAsset*  asset)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundBankEntry*>(name, asset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundBankEntry::SoundBankEntry()   {
}
