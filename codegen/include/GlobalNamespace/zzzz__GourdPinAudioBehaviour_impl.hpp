#pragma once
// IWYU pragma private; include "GlobalNamespace/GourdPinAudioBehaviour.hpp"
#include "GlobalNamespace/zzzz__CustomAudioAssetBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GourdPinAudioBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_def.hpp"
#include "GlobalNamespace/zzzz__AudioPicker_def.hpp"
#include "GlobalNamespace/zzzz__PropHomeBlock_def.hpp"
#include "GlobalNamespace/zzzz__PropHome_def.hpp"
#include "GlobalNamespace/zzzz__Prop_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GourdPinAudioBehaviour.GetNumberOfFilledHomes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GourdPinAudioBehaviour::*)()>(&::GlobalNamespace::GourdPinAudioBehaviour::GetNumberOfFilledHomes)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18037dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(),
                        {"GetNumberOfFilledHomes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdPinAudioBehaviour.GetAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::AudioAsset> (::GlobalNamespace::GourdPinAudioBehaviour::*)(::GlobalNamespace::Prop*, ::GlobalNamespace::PropHome*)>(&::GlobalNamespace::GourdPinAudioBehaviour::GetAsset)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x18037dda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdPinAudioBehaviour.Excute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdPinAudioBehaviour::*)(::GlobalNamespace::Prop*, ::GlobalNamespace::PropHome*)>(&::GlobalNamespace::GourdPinAudioBehaviour::Excute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(),
                    {::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GourdPinAudioBehaviour._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GourdPinAudioBehaviour::*)()>(&::GlobalNamespace::GourdPinAudioBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::PropHomeBlock>& GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_get_propHomeBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeBlock;
}
constexpr ::UnityW<::GlobalNamespace::PropHomeBlock> const& GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_get_propHomeBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___propHomeBlock;
}
constexpr void GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_set_propHomeBlock(::UnityW<::GlobalNamespace::PropHomeBlock>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___propHomeBlock = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPicker>& GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_get_picker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___picker;
}
constexpr ::UnityW<::GlobalNamespace::AudioPicker> const& GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_get_picker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___picker;
}
constexpr void GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_set_picker(::UnityW<::GlobalNamespace::AudioPicker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___picker = value;
}
constexpr ::UnityW<::GlobalNamespace::AudioPicker>& GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_get_pickerVariant()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickerVariant;
}
constexpr ::UnityW<::GlobalNamespace::AudioPicker> const& GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_get_pickerVariant() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pickerVariant;
}
constexpr void GlobalNamespace::GourdPinAudioBehaviour::__cordl_internal_set_pickerVariant(::UnityW<::GlobalNamespace::AudioPicker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pickerVariant = value;
}
inline int32_t GlobalNamespace::GourdPinAudioBehaviour::GetNumberOfFilledHomes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(),
                        {"GetNumberOfFilledHomes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::AudioAsset> GlobalNamespace::GourdPinAudioBehaviour::GetAsset(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::AudioAsset>>(this, ___internal_method, prop, propHome);
}
inline void GlobalNamespace::GourdPinAudioBehaviour::Excute(::GlobalNamespace::Prop*  prop, ::GlobalNamespace::PropHome*  propHome)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prop, propHome);
}
inline void GlobalNamespace::GourdPinAudioBehaviour::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GourdPinAudioBehaviour*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GourdPinAudioBehaviour* GlobalNamespace::GourdPinAudioBehaviour::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GourdPinAudioBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GourdPinAudioBehaviour::GourdPinAudioBehaviour()   {
}
