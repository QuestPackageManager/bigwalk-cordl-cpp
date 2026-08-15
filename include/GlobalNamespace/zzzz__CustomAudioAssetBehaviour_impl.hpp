#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomAudioAssetBehaviour.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CustomAudioAssetBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomAudioAssetBehaviour.GetAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioAsset> (::GlobalNamespace::CustomAudioAssetBehaviour::*)(::GlobalNamespace::Prop*, ::GlobalNamespace::PropHome*)>(&::GlobalNamespace::CustomAudioAssetBehaviour::GetAsset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomAudioAssetBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomAudioAssetBehaviour*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomAudioAssetBehaviour.Excute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomAudioAssetBehaviour::*)(::GlobalNamespace::Prop*, ::GlobalNamespace::PropHome*)>(&::GlobalNamespace::CustomAudioAssetBehaviour::Excute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomAudioAssetBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomAudioAssetBehaviour*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomAudioAssetBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomAudioAssetBehaviour::*)()>(&::GlobalNamespace::CustomAudioAssetBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioAssetBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityW<::GlobalNamespace::AudioAsset> GlobalNamespace::CustomAudioAssetBehaviour::GetAsset(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomAudioAssetBehaviour*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioAsset>>(this, ___internal_method, prop, propHome);
}
inline void GlobalNamespace::CustomAudioAssetBehaviour::Excute(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomAudioAssetBehaviour*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, propHome);
}
inline void GlobalNamespace::CustomAudioAssetBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomAudioAssetBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomAudioAssetBehaviour* GlobalNamespace::CustomAudioAssetBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomAudioAssetBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomAudioAssetBehaviour::CustomAudioAssetBehaviour()   {
}
