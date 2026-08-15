#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TextureFormatUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/PostProcessing/zzzz__TextureFormatUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities.IsObsolete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*)>(&::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::IsObsolete)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x181fd1cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(),
                        {"IsObsolete", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities.GetUncompressedRenderTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderTextureFormat (*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::GetUncompressedRenderTextureFormat)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181fd1bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(),
                        {"GetUncompressedRenderTextureFormat", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities.IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RenderTextureFormat)>(&::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::IsSupported)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fd1e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(),
                        {"IsSupported", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities.IsSupported
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::TextureFormat)>(&::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::IsSupported)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181fd1db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(),
                        {"IsSupported", {}, {::i2c::type_of<::UnityEngine::TextureFormat>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::setStaticF_s_FormatAliasMap(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderTextureFormat>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderTextureFormat>*, "s_FormatAliasMap", ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderTextureFormat>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderTextureFormat>* UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::getStaticF_s_FormatAliasMap()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderTextureFormat>*, "s_FormatAliasMap", ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::setStaticF_s_SupportedRenderTextureFormats(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,bool>*, "s_SupportedRenderTextureFormats", ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,bool>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,bool>* UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::getStaticF_s_SupportedRenderTextureFormats()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,bool>*, "s_SupportedRenderTextureFormats", ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>();
}
inline void UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::setStaticF_s_SupportedTextureFormats(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,bool>*, "s_SupportedTextureFormats", ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,bool>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,bool>* UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::getStaticF_s_SupportedTextureFormats()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,bool>*, "s_SupportedTextureFormats", ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>();
}
inline bool UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::IsObsolete(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(),
                        {"IsObsolete", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::RenderTextureFormat UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::GetUncompressedRenderTextureFormat(::UnityEngine::Texture*  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(),
                        {"GetUncompressedRenderTextureFormat", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderTextureFormat>(nullptr, ___internal_method, texture);
}
inline bool UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::IsSupported(::UnityEngine::RenderTextureFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(),
                        {"IsSupported", {}, {::i2c::type_of<::UnityEngine::RenderTextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
inline bool UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::IsSupported(::UnityEngine::TextureFormat  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities*>(),
                        {"IsSupported", {}, {::i2c::type_of<::UnityEngine::TextureFormat>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, format);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::PostProcessing::TextureFormatUtilities::TextureFormatUtilities()   {
}
