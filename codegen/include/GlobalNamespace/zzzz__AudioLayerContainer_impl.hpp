#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioLayerContainer.hpp"
#include "GlobalNamespace/zzzz__AudioAsset_impl.hpp"
#include "GlobalNamespace/zzzz__AudioLayer_impl.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayerContainer_def.hpp"
#include "GlobalNamespace/zzzz__AudioLayer_def.hpp"
#include "GlobalNamespace/zzzz__AudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__IAudioVolume_def.hpp"
#include "GlobalNamespace/zzzz__ISoundBankable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::AudioLayerContainer_LayerType::AudioLayerContainer_LayerType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioLayerContainer_LayerType::AudioLayerContainer_LayerType()   {
}
constexpr ::GlobalNamespace::AudioLayerContainer_LayerType  GlobalNamespace::AudioLayerContainer_LayerType::Head{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::AudioLayerContainer_LayerType  GlobalNamespace::AudioLayerContainer_LayerType::Loop{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::AudioLayerContainer_LayerType  GlobalNamespace::AudioLayerContainer_LayerType::Tail{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.get_IntensityDriven
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioLayerContainer::*)()>(&::GlobalNamespace::AudioLayerContainer::get_IntensityDriven)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18037a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_IntensityDriven", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.get_MinIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioLayerContainer::*)()>(&::GlobalNamespace::AudioLayerContainer::get_MinIntensity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_MinIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.get_MaxIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioLayerContainer::*)()>(&::GlobalNamespace::AudioLayerContainer::get_MaxIntensity)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_MaxIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.get_LoopDelay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioLayerContainer::*)()>(&::GlobalNamespace::AudioLayerContainer::get_LoopDelay)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f80d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_LoopDelay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.get_SyncRandom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioLayerContainer::*)()>(&::GlobalNamespace::AudioLayerContainer::get_SyncRandom)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802fdd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_SyncRandom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLayerContainer::*)()>(&::GlobalNamespace::AudioLayerContainer::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.CheckValidity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLayerContainer::*)(::ArrayW<::GlobalNamespace::AudioLayer*>, ::GlobalNamespace::AudioLayerContainer_LayerType)>(&::GlobalNamespace::AudioLayerContainer::CheckValidity)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x18047b450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"CheckValidity", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::AudioLayer*>>(), ::i2c::type_of<::GlobalNamespace::AudioLayerContainer_LayerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.GetNormalizedIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::AudioLayerContainer::*)(float_t)>(&::GlobalNamespace::AudioLayerContainer::GetNormalizedIntensity)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18047b660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"GetNormalizedIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.InRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioLayerContainer::*)(::GlobalNamespace::AudioLayerContainer_LayerType, int32_t, float_t)>(&::GlobalNamespace::AudioLayerContainer::InRange)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18047b880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"InRange", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer_LayerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.InRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AudioLayerContainer::*)(::GlobalNamespace::AudioLayer*, float_t)>(&::GlobalNamespace::AudioLayerContainer::InRange)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18047b7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"InRange", {}, {::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.GetVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IAudioVolume* (::GlobalNamespace::AudioLayerContainer::*)(::GlobalNamespace::AudioLayer*, float_t, ::GlobalNamespace::AudioVolume*)>(&::GlobalNamespace::AudioLayerContainer::GetVolume)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x18047b6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"GetVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer.GetDeterministicIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AudioLayerContainer::*)(int32_t, int32_t)>(&::GlobalNamespace::AudioLayerContainer::GetDeterministicIndex)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18047b620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"GetDeterministicIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AudioLayerContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AudioLayerContainer::*)()>(&::GlobalNamespace::AudioLayerContainer::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18047b9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__intensityDriven()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intensityDriven;
}
constexpr bool const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__intensityDriven() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____intensityDriven;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set__intensityDriven(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____intensityDriven = value;
}
constexpr float_t& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__minIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minIntensity;
}
constexpr float_t const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__minIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____minIntensity;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set__minIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____minIntensity = value;
}
constexpr float_t& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__maxIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxIntensity;
}
constexpr float_t const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__maxIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxIntensity;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set__maxIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxIntensity = value;
}
constexpr float_t& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__loopDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopDelay;
}
constexpr float_t const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__loopDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loopDelay;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set__loopDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loopDelay = value;
}
constexpr ::ArrayW<::GlobalNamespace::AudioLayer*>& GlobalNamespace::AudioLayerContainer::__cordl_internal_get_Heads()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Heads;
}
constexpr ::ArrayW<::GlobalNamespace::AudioLayer*> const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get_Heads() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Heads;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set_Heads(::ArrayW<::GlobalNamespace::AudioLayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Heads = value;
}
constexpr ::ArrayW<::GlobalNamespace::AudioLayer*>& GlobalNamespace::AudioLayerContainer::__cordl_internal_get_Loops()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loops;
}
constexpr ::ArrayW<::GlobalNamespace::AudioLayer*> const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get_Loops() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Loops;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set_Loops(::ArrayW<::GlobalNamespace::AudioLayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Loops = value;
}
constexpr ::ArrayW<::GlobalNamespace::AudioLayer*>& GlobalNamespace::AudioLayerContainer::__cordl_internal_get_Tails()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tails;
}
constexpr ::ArrayW<::GlobalNamespace::AudioLayer*> const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get_Tails() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tails;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set_Tails(::ArrayW<::GlobalNamespace::AudioLayer*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tails = value;
}
constexpr ::GlobalNamespace::AudioVolume*& GlobalNamespace::AudioLayerContainer::__cordl_internal_get_Volume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr ::GlobalNamespace::AudioVolume* const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get_Volume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Volume;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set_Volume(::GlobalNamespace::AudioVolume*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Volume = value;
}
constexpr bool& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__syncRandom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncRandom;
}
constexpr bool const& GlobalNamespace::AudioLayerContainer::__cordl_internal_get__syncRandom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syncRandom;
}
constexpr void GlobalNamespace::AudioLayerContainer::__cordl_internal_set__syncRandom(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syncRandom = value;
}
inline bool GlobalNamespace::AudioLayerContainer::get_IntensityDriven()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_IntensityDriven", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioLayerContainer::get_MinIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_MinIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioLayerContainer::get_MaxIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_MaxIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::AudioLayerContainer::get_LoopDelay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_LoopDelay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::AudioLayerContainer::get_SyncRandom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"get_SyncRandom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::AudioLayerContainer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AudioLayerContainer::CheckValidity(::ArrayW<::GlobalNamespace::AudioLayer*>  layers, ::GlobalNamespace::AudioLayerContainer_LayerType  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"CheckValidity", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::AudioLayer*>>(), ::i2c::type_of<::GlobalNamespace::AudioLayerContainer_LayerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layers, type);
}
inline float_t GlobalNamespace::AudioLayerContainer::GetNormalizedIntensity(float_t  rawIntensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"GetNormalizedIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, rawIntensity);
}
inline bool GlobalNamespace::AudioLayerContainer::InRange(::GlobalNamespace::AudioLayerContainer_LayerType  type, int32_t  index, float_t  rawIntensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"InRange", {}, {::i2c::type_of<::GlobalNamespace::AudioLayerContainer_LayerType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, index, rawIntensity);
}
inline bool GlobalNamespace::AudioLayerContainer::InRange(::GlobalNamespace::AudioLayer*  layer, float_t  rawIntensity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"InRange", {}, {::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, layer, rawIntensity);
}
inline ::GlobalNamespace::IAudioVolume* GlobalNamespace::AudioLayerContainer::GetVolume(::GlobalNamespace::AudioLayer*  layer, float_t  rawIntensity, ::GlobalNamespace::AudioVolume*  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"GetVolume", {}, {::i2c::type_of<::GlobalNamespace::AudioLayer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::AudioVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IAudioVolume*>(this, ___internal_method, layer, rawIntensity, volume);
}
inline int32_t GlobalNamespace::AudioLayerContainer::GetDeterministicIndex(int32_t  randInt, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {"GetDeterministicIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, randInt, length);
}
inline void GlobalNamespace::AudioLayerContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AudioLayerContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AudioLayerContainer* GlobalNamespace::AudioLayerContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AudioLayerContainer*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISoundBankable"
constexpr  GlobalNamespace::AudioLayerContainer::operator ::GlobalNamespace::ISoundBankable*() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISoundBankable"
constexpr ::GlobalNamespace::ISoundBankable* GlobalNamespace::AudioLayerContainer::i___GlobalNamespace__ISoundBankable() noexcept {
return static_cast<::GlobalNamespace::ISoundBankable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AudioLayerContainer::AudioLayerContainer()   {
}
