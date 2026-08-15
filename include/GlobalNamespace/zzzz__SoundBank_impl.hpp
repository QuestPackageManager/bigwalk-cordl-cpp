#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBank.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__SoundBank_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__ISoundBankable_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankEntry_def.hpp"
#include "GlobalNamespace/zzzz__SoundCue_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundBank.get_RuntimeAssetLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>* (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::get_RuntimeAssetLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"get_RuntimeAssetLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.set_RuntimeAssetLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*)>(&::GlobalNamespace::SoundBank::set_RuntimeAssetLookup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"set_RuntimeAssetLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.get_AllClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::get_AllClips)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"get_AllClips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.set_AllClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*)>(&::GlobalNamespace::SoundBank::set_AllClips)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"set_AllClips", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.get_AllSoundBanks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* (*)()>(&::GlobalNamespace::SoundBank::get_AllSoundBanks)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804a5240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"get_AllSoundBanks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.set_AllSoundBanks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*)>(&::GlobalNamespace::SoundBank::set_AllSoundBanks)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804a5280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"set_AllSoundBanks", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::OnEnable)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x1804a4bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.RefreshLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::RefreshLookup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804a4fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"RefreshLookup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.RefreshClips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::RefreshClips)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x1804a4e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"RefreshClips", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.ContainsCue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SoundBankEntry* (::GlobalNamespace::SoundBank::*)(::GlobalNamespace::SoundCue*, bool)>(&::GlobalNamespace::SoundBank::ContainsCue)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x1804a48e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"ContainsCue", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.FindAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioAsset> (::GlobalNamespace::SoundBank::*)(::StringW)>(&::GlobalNamespace::SoundBank::FindAsset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1804a4a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"FindAsset", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.GetCueCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::SoundBank::*)(::GlobalNamespace::SoundCue*)>(&::GlobalNamespace::SoundBank::GetCueCount)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804a4a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"GetCueCount", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.ContainsBankable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SoundBank::*)(::GlobalNamespace::ISoundBankable*)>(&::GlobalNamespace::SoundBank::ContainsBankable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x1804a4800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"ContainsBankable", {}, {::i2c::type_of<::GlobalNamespace::ISoundBankable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.LoadBank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::LoadBank)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804a4b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"LoadBank", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank.UnloadBank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::UnloadBank)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804a50a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"UnloadBank", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBank._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBank::*)()>(&::GlobalNamespace::SoundBank::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804a5190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SoundBankEntry*>*& GlobalNamespace::SoundBank::__cordl_internal_get_Entries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entries;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SoundBankEntry*>* const& GlobalNamespace::SoundBank::__cordl_internal_get_Entries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entries;
}
constexpr void GlobalNamespace::SoundBank::__cordl_internal_set_Entries(::System::Collections::Generic::List_1<::GlobalNamespace::SoundBankEntry*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entries = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*& GlobalNamespace::SoundBank::__cordl_internal_get__RuntimeAssetLookup_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RuntimeAssetLookup_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>* const& GlobalNamespace::SoundBank::__cordl_internal_get__RuntimeAssetLookup_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RuntimeAssetLookup_k__BackingField;
}
constexpr void GlobalNamespace::SoundBank::__cordl_internal_set__RuntimeAssetLookup_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RuntimeAssetLookup_k__BackingField = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*& GlobalNamespace::SoundBank::__cordl_internal_get__AllClips_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllClips_k__BackingField;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* const& GlobalNamespace::SoundBank::__cordl_internal_get__AllClips_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____AllClips_k__BackingField;
}
constexpr void GlobalNamespace::SoundBank::__cordl_internal_set__AllClips_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____AllClips_k__BackingField = value;
}
inline void GlobalNamespace::SoundBank::setStaticF__AllSoundBanks_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*, "<AllSoundBanks>k__BackingField", ::GlobalNamespace::SoundBank*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* GlobalNamespace::SoundBank::getStaticF__AllSoundBanks_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*, "<AllSoundBanks>k__BackingField", ::GlobalNamespace::SoundBank*>();
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>* GlobalNamespace::SoundBank::get_RuntimeAssetLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"get_RuntimeAssetLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBank::set_RuntimeAssetLookup(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"set_RuntimeAssetLookup", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::GlobalNamespace::AudioAsset>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::SoundBank::get_AllClips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"get_AllClips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBank::set_AllClips(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"set_AllClips", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::AudioClip>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>* GlobalNamespace::SoundBank::get_AllSoundBanks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"get_AllSoundBanks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SoundBank::set_AllSoundBanks(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"set_AllSoundBanks", {}, {::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::SoundBank>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::SoundBank::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBank::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBank::RefreshLookup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"RefreshLookup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBank::RefreshClips()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"RefreshClips", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundBankEntry* GlobalNamespace::SoundBank::ContainsCue(::GlobalNamespace::SoundCue*  cue, bool  equalOnly)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"ContainsCue", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SoundBankEntry*>(this, ___internal_method, cue, equalOnly);
}
inline ::UnityW<::GlobalNamespace::AudioAsset> GlobalNamespace::SoundBank::FindAsset(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"FindAsset", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioAsset>>(this, ___internal_method, name);
}
inline int32_t GlobalNamespace::SoundBank::GetCueCount(::GlobalNamespace::SoundCue*  cue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"GetCueCount", {}, {::i2c::type_of<::GlobalNamespace::SoundCue*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, cue);
}
inline bool GlobalNamespace::SoundBank::ContainsBankable(::GlobalNamespace::ISoundBankable*  bankable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"ContainsBankable", {}, {::i2c::type_of<::GlobalNamespace::ISoundBankable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bankable);
}
inline void GlobalNamespace::SoundBank::LoadBank()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"LoadBank", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBank::UnloadBank()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {"UnloadBank", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBank::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBank*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundBank* GlobalNamespace::SoundBank::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundBank*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundBank::SoundBank()   {
}
