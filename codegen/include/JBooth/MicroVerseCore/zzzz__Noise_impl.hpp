#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Noise.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__Noise_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType::Noise_NoiseType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType::Noise_NoiseType()   {
}
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType  JBooth::MicroVerseCore::Noise_NoiseType::None{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType  JBooth::MicroVerseCore::Noise_NoiseType::Simple{static_cast<int32_t>(0x1)};
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType  JBooth::MicroVerseCore::Noise_NoiseType::FBM{static_cast<int32_t>(0x2)};
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType  JBooth::MicroVerseCore::Noise_NoiseType::Worley{static_cast<int32_t>(0x3)};
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType  JBooth::MicroVerseCore::Noise_NoiseType::Worm{static_cast<int32_t>(0x4)};
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType  JBooth::MicroVerseCore::Noise_NoiseType::WormFBM{static_cast<int32_t>(0x5)};
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType  JBooth::MicroVerseCore::Noise_NoiseType::Texture{static_cast<int32_t>(0x6)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JBooth::MicroVerseCore::Noise_NoiseSpace::Noise_NoiseSpace(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Noise_NoiseSpace::Noise_NoiseSpace()   {
}
constexpr ::JBooth::MicroVerseCore::Noise_NoiseSpace  JBooth::MicroVerseCore::Noise_NoiseSpace::World{static_cast<int32_t>(0x0)};
constexpr ::JBooth::MicroVerseCore::Noise_NoiseSpace  JBooth::MicroVerseCore::Noise_NoiseSpace::Stamp{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.GetParamVector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::JBooth::MicroVerseCore::Noise::*)()>(&::JBooth::MicroVerseCore::Noise::GetParamVector)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18143b830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetParamVector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.GetParam2Vector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::JBooth::MicroVerseCore::Noise::*)()>(&::JBooth::MicroVerseCore::Noise::GetParam2Vector)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18143b810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetParam2Vector", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.GetTextureParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::JBooth::MicroVerseCore::Noise::*)()>(&::JBooth::MicroVerseCore::Noise::GetTextureParams)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetTextureParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.GetTextureScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::JBooth::MicroVerseCore::Noise::*)()>(&::JBooth::MicroVerseCore::Noise::GetTextureScale)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18143b870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetTextureScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.GetTextureOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::JBooth::MicroVerseCore::Noise::*)()>(&::JBooth::MicroVerseCore::Noise::GetTextureOffset)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18143b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetTextureOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.KeywordLookup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::JBooth::MicroVerseCore::Noise_NoiseType)>(&::JBooth::MicroVerseCore::Noise::KeywordLookup)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x18143b890;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"KeywordLookup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise_NoiseType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.PrepareMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Noise::*)(::UnityEngine::Material*, ::StringW, ::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::Noise::PrepareMaterial)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x18143b930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.EnableKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Noise::*)(::UnityEngine::Material*, ::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(&::JBooth::MicroVerseCore::Noise::EnableKeyword)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18143b6c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"EnableKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::JBooth::MicroVerseCore::Noise::*)()>(&::JBooth::MicroVerseCore::Noise::Clone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180535a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::Noise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::Noise::*)()>(&::JBooth::MicroVerseCore::Noise::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18143baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType& JBooth::MicroVerseCore::Noise::__cordl_internal_get_noiseType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseType;
}
constexpr ::JBooth::MicroVerseCore::Noise_NoiseType const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_noiseType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseType;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_noiseType(::JBooth::MicroVerseCore::Noise_NoiseType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseType = value;
}
constexpr ::JBooth::MicroVerseCore::Noise_NoiseSpace& JBooth::MicroVerseCore::Noise::__cordl_internal_get_noiseSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseSpace;
}
constexpr ::JBooth::MicroVerseCore::Noise_NoiseSpace const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_noiseSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___noiseSpace;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_noiseSpace(::JBooth::MicroVerseCore::Noise_NoiseSpace  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___noiseSpace = value;
}
constexpr float_t& JBooth::MicroVerseCore::Noise::__cordl_internal_get_frequency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
constexpr float_t const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_frequency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___frequency;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_frequency(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___frequency = value;
}
constexpr float_t& JBooth::MicroVerseCore::Noise::__cordl_internal_get_amplitude()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitude;
}
constexpr float_t const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_amplitude() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___amplitude;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_amplitude(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___amplitude = value;
}
constexpr float_t& JBooth::MicroVerseCore::Noise::__cordl_internal_get_offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr float_t const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___offset;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___offset = value;
}
constexpr float_t& JBooth::MicroVerseCore::Noise::__cordl_internal_get_balance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balance;
}
constexpr float_t const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_balance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___balance;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_balance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___balance = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& JBooth::MicroVerseCore::Noise::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr ::UnityEngine::Vector4& JBooth::MicroVerseCore::Noise::__cordl_internal_get_textureST()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureST;
}
constexpr ::UnityEngine::Vector4 const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_textureST() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textureST;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_textureST(::UnityEngine::Vector4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textureST = value;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel& JBooth::MicroVerseCore::Noise::__cordl_internal_get_channel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_TextureChannel const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_channel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___channel;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_channel(::JBooth::MicroVerseCore::FalloffFilter_TextureChannel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___channel = value;
}
constexpr float_t& JBooth::MicroVerseCore::Noise::__cordl_internal_get_displayGamma()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayGamma;
}
constexpr float_t const& JBooth::MicroVerseCore::Noise::__cordl_internal_get_displayGamma() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___displayGamma;
}
constexpr void JBooth::MicroVerseCore::Noise::__cordl_internal_set_displayGamma(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___displayGamma = value;
}
inline ::UnityEngine::Vector4 JBooth::MicroVerseCore::Noise::GetParamVector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetParamVector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 JBooth::MicroVerseCore::Noise::GetParam2Vector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetParam2Vector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 JBooth::MicroVerseCore::Noise::GetTextureParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetTextureParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 JBooth::MicroVerseCore::Noise::GetTextureScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetTextureScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 JBooth::MicroVerseCore::Noise::GetTextureOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"GetTextureOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::StringW JBooth::MicroVerseCore::Noise::KeywordLookup(::StringW  key, ::JBooth::MicroVerseCore::Noise_NoiseType  nt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"KeywordLookup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::JBooth::MicroVerseCore::Noise_NoiseType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key, nt);
}
inline void JBooth::MicroVerseCore::Noise::PrepareMaterial(::UnityEngine::Material*  mat, ::StringW  key, ::StringW  prop, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"PrepareMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mat, key, prop, keywords);
}
inline void JBooth::MicroVerseCore::Noise::EnableKeyword(::UnityEngine::Material*  material, ::StringW  prefix, ::System::Collections::Generic::List_1<::StringW>*  keywords)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"EnableKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, material, prefix, keywords);
}
inline ::System::Object* JBooth::MicroVerseCore::Noise::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::Noise::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::Noise*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::Noise* JBooth::MicroVerseCore::Noise::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::Noise*>());
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  JBooth::MicroVerseCore::Noise::operator ::System::ICloneable*() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* JBooth::MicroVerseCore::Noise::i___System__ICloneable() noexcept {
return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::Noise::Noise()   {
}
