#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include "beatsaber-hook/shared/valuew.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UITKTextHandle)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
struct RenderedText;
}
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
namespace UnityEngine::TextCore {
struct RichTextTagParser_TagType;
}
namespace UnityEngine::UIElements {
class ATGTextEventHandler;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine::UIElements {
class TextEventHandler;
}
namespace UnityEngine::UIElements {
struct VisualElement_MeasureMode;
}
namespace UnityEngine {
class TextAsset;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UITKTextHandle;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UITKTextHandle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UITKTextHandle*, "UnityEngine.UIElements", "UITKTextHandle");
// Dependencies System.Nullable`1<T>, UnityEngine.Color, UnityEngine.TextCore.Text.TextHandle
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UITKTextHandle
class CORDL_TYPE UITKTextHandle : public ::UnityEngine::TextCore::Text::TextHandle {
public:
// Declarations
 __declspec(property(get=get_ATGMeasuredWidth, put=set_ATGMeasuredWidth)) ::System::Nullable_1<float_t>  ATGMeasuredWidth;

 __declspec(property(get=get_ATGRoundedWidth, put=set_ATGRoundedWidth)) float_t  ATGRoundedWidth;

 __declspec(property(get=get_IsPlaceholder)) bool  IsPlaceholder;

 __declspec(property(get=get_LastPixelPerPoint, put=set_LastPixelPerPoint)) float_t  LastPixelPerPoint;

 __declspec(property(get=get_Links)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::UnityEngine::TextCore::RichTextTagParser_TagType,::StringW>>*  Links;

 __declspec(property(get=get_MeasuredWidth, put=set_MeasuredWidth)) ::System::Nullable_1<float_t>  MeasuredWidth;

 __declspec(property(get=get_RoundedWidth, put=set_RoundedWidth)) float_t  RoundedWidth;

/// @brief Field <ATGMeasuredWidth>k__BackingField, offset 0xfc, size 0x8 
 __declspec(property(get=__cordl_internal_get__ATGMeasuredWidth_k__BackingField, put=__cordl_internal_set__ATGMeasuredWidth_k__BackingField)) ::System::Nullable_1<float_t>  _ATGMeasuredWidth_k__BackingField;

/// @brief Field <ATGRoundedWidth>k__BackingField, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get__ATGRoundedWidth_k__BackingField, put=__cordl_internal_set__ATGRoundedWidth_k__BackingField)) float_t  _ATGRoundedWidth_k__BackingField;

/// @brief Field <LastPixelPerPoint>k__BackingField, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastPixelPerPoint_k__BackingField, put=__cordl_internal_set__LastPixelPerPoint_k__BackingField)) float_t  _LastPixelPerPoint_k__BackingField;

/// @brief Field <MeasuredWidth>k__BackingField, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__MeasuredWidth_k__BackingField, put=__cordl_internal_set__MeasuredWidth_k__BackingField)) ::System::Nullable_1<float_t>  _MeasuredWidth_k__BackingField;

/// @brief Field <RoundedWidth>k__BackingField, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__RoundedWidth_k__BackingField, put=__cordl_internal_set__RoundedWidth_k__BackingField)) float_t  _RoundedWidth_k__BackingField;

/// @brief Field atgHyperlinkColor, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_atgHyperlinkColor, put=__cordl_internal_set_atgHyperlinkColor)) ::UnityEngine::Color  atgHyperlinkColor;

/// @brief Field k_MinPadding, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_MinPadding, put=setStaticF_k_MinPadding)) float_t  k_MinPadding;

/// @brief Field m_ATGTextEventHandler, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ATGTextEventHandler, put=__cordl_internal_set_m_ATGTextEventHandler)) ::UnityEngine::UIElements::ATGTextEventHandler*  m_ATGTextEventHandler;

/// @brief Field m_Links, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Links, put=__cordl_internal_set_m_Links)) ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::UnityEngine::TextCore::RichTextTagParser_TagType,::StringW>>*  m_Links;

/// @brief Field m_TextElement, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextElement, put=__cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement*  m_TextElement;

/// @brief Field m_TextEventHandler, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TextEventHandler, put=__cordl_internal_set_m_TextEventHandler)) ::UnityEngine::UIElements::TextEventHandler*  m_TextEventHandler;

/// @brief Field s_TextLib, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TextLib, put=setStaticF_s_TextLib)) Il2CppObject*  s_TextLib;

 __declspec(property(get=get_textLib)) Il2CppObject*  textLib;

/// @brief Field uvsAreGenerated, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_uvsAreGenerated, put=__cordl_internal_set_uvsAreGenerated)) bool  uvsAreGenerated;

/// @brief Method ATGFindIntersectingLink, addr 0x1823f5970, size 0x120, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityEngine::TextCore::RichTextTagParser_TagType,::StringW> ATGFindIntersectingLink(::UnityEngine::Vector2  point) ;

/// @brief Method AddToPermanentCacheAndGenerateMesh, addr 0x1823f5a90, size 0x80, virtual true, abstract: false, final false
inline void AddToPermanentCacheAndGenerateMesh() ;

/// @brief Method CacheTextGenerationInfo, addr 0x1823f5b10, size 0xa0, virtual false, abstract: false, final false
inline void CacheTextGenerationInfo() ;

/// @brief Method ComputeNativeTextSize, addr 0x1823f5bb0, size 0x250, virtual false, abstract: false, final false
inline void ComputeNativeTextSize(::by_ref<::StringW>  textToMeasure, float_t  width, ::UnityEngine::UIElements::VisualElement_MeasureMode  widthMode, float_t  height, ::UnityEngine::UIElements::VisualElement_MeasureMode  heightMode, ::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method ComputeSettingsAndUpdate, addr 0x1823f5e00, size 0x250, virtual false, abstract: false, final false
inline void ComputeSettingsAndUpdate() ;

/// @brief Method ComputeTextSize, addr 0x1823f6050, size 0x3c0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ComputeTextSize(::StringW  textToMeasure, float_t  width, ::UnityEngine::UIElements::VisualElement_MeasureMode  widthMode, float_t  height, ::UnityEngine::UIElements::VisualElement_MeasureMode  heightMode, ::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method ComputeTextSize, addr 0x1823f6410, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ComputeTextSize(::by_ref<::UnityEngine::TextCore::Text::RenderedText>  textToMeasure, float_t  width, float_t  height, ::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method ConvertUssToNativeTextGenerationSettings, addr 0x1823f6550, size 0x840, virtual false, abstract: false, final false
inline bool ConvertUssToNativeTextGenerationSettings(::StringW  textToMeasure, ::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method ConvertUssToTextGenerationSettings, addr 0x1823f6d90, size 0x660, virtual true, abstract: false, final false
inline bool ConvertUssToTextGenerationSettings(bool  populateScreenRect, ::System::Nullable_1<float_t>  fontsize) ;

/// @brief Method EnsureIsReadyForJobs, addr 0x1823f73f0, size 0x70, virtual false, abstract: false, final false
inline void EnsureIsReadyForJobs() ;

/// @brief Method GetICUAsset, addr 0x1823f74e0, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::TextAsset> GetICUAsset() ;

/// @brief Method GetICUAssetStaticFalback, addr 0x1823f7460, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::TextAsset> GetICUAssetStaticFalback() ;

/// @brief Method GetPixelsPerPoint, addr 0x1823f76b0, size 0x20, virtual true, abstract: false, final false
inline float_t GetPixelsPerPoint() ;

/// @brief Method GetTextOverflowMode, addr 0x1823f76d0, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::TextCore::Text::TextOverflowMode GetTextOverflowMode() ;

/// @brief Method GetVertexPadding, addr 0x1823f77a0, size 0x1c0, virtual false, abstract: false, final false
inline float_t GetVertexPadding(::UnityEngine::TextCore::Text::FontAsset*  fontAsset) ;

/// @brief Method HandleATag, addr 0x1823f7960, size 0xe0, virtual false, abstract: false, final false
inline void HandleATag() ;

/// @brief Method HandleLinkAndATagCallbacks, addr 0x1823f7a40, size 0x20, virtual false, abstract: false, final false
inline void HandleLinkAndATagCallbacks() ;

/// @brief Method HandleLinkTag, addr 0x1823f7a60, size 0xe0, virtual false, abstract: false, final false
inline void HandleLinkTag() ;

/// @brief Method HasMissingGlyphs, addr 0x1823f7b40, size 0x60, virtual false, abstract: false, final false
inline bool HasMissingGlyphs(::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">  textInfo, ::by_ref<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::HashSet_1<uint32_t>*>*>  missingGlyphsPerFontAsset) ;

/// @brief Method InitTextLib, addr 0x1823f7ba0, size 0x90, virtual false, abstract: false, final false
inline void InitTextLib() ;

/// @brief Method IsAdvancedTextEnabledForElement, addr 0x1823f7c30, size 0x10, virtual true, abstract: false, final false
inline bool IsAdvancedTextEnabledForElement() ;

/// @brief Method IsElided, addr 0x1823f7c40, size 0x50, virtual false, abstract: false, final false
inline bool IsElided() ;

static inline ::UnityEngine::UIElements::UITKTextHandle* New_ctor(::UnityEngine::UIElements::TextElement*  te) ;

/// @brief Method ProcessMeshInfos, addr 0x1823f7c90, size 0xf0, virtual false, abstract: false, final false
inline void ProcessMeshInfos(::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">  textInfo, ::by_ref<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>*>*>  textElementIndicesByMesh, ::by_ref<::System::Collections::Generic::List_1<bool>*>  hasMultipleColorsByMesh) ;

/// @brief Method ReleaseResourcesIfPossible, addr 0x1823f7d80, size 0x220, virtual false, abstract: false, final false
inline void ReleaseResourcesIfPossible() ;

/// @brief Method RemoveFromPermanentCacheATG, addr 0x1823f7fa0, size 0x40, virtual true, abstract: false, final false
inline void RemoveFromPermanentCacheATG() ;

/// @brief Method SetDirty, addr 0x1823f7fe0, size 0x20, virtual true, abstract: false, final false
inline void SetDirty() ;

/// @brief Method ShapeText, addr 0x1823f8000, size 0x150, virtual false, abstract: false, final false
inline void ShapeText() ;

/// @brief Method TextLibraryCanElide, addr 0x1823f8150, size 0x30, virtual false, abstract: false, final false
inline bool TextLibraryCanElide() ;

/// @brief Method UpdateATGTextEventHandler, addr 0x1823f8180, size 0x430, virtual false, abstract: false, final false
inline void UpdateATGTextEventHandler() ;

/// @brief Method UpdateMesh, addr 0x1823f85b0, size 0x90, virtual false, abstract: false, final false
inline void UpdateMesh() ;

/// @brief Method UpdateNative, addr 0x1823f8640, size 0x2b0, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::ValueW<24, "UnityEngine.TextCore.Text", "NativeTextInfo">,bool> UpdateNative(bool  generateNativeSettings) ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__ATGMeasuredWidth_k__BackingField() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__ATGMeasuredWidth_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ATGRoundedWidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ATGRoundedWidth_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__LastPixelPerPoint_k__BackingField() const;

constexpr float_t& __cordl_internal_get__LastPixelPerPoint_k__BackingField() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__MeasuredWidth_k__BackingField() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__MeasuredWidth_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__RoundedWidth_k__BackingField() const;

constexpr float_t& __cordl_internal_get__RoundedWidth_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_atgHyperlinkColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_atgHyperlinkColor() ;

constexpr ::UnityEngine::UIElements::ATGTextEventHandler* const& __cordl_internal_get_m_ATGTextEventHandler() const;

constexpr ::UnityEngine::UIElements::ATGTextEventHandler*& __cordl_internal_get_m_ATGTextEventHandler() ;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::UnityEngine::TextCore::RichTextTagParser_TagType,::StringW>>* const& __cordl_internal_get_m_Links() const;

constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::UnityEngine::TextCore::RichTextTagParser_TagType,::StringW>>*& __cordl_internal_get_m_Links() ;

constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement() ;

constexpr ::UnityEngine::UIElements::TextEventHandler* const& __cordl_internal_get_m_TextEventHandler() const;

constexpr ::UnityEngine::UIElements::TextEventHandler*& __cordl_internal_get_m_TextEventHandler() ;

constexpr bool const& __cordl_internal_get_uvsAreGenerated() const;

constexpr bool& __cordl_internal_get_uvsAreGenerated() ;

constexpr void __cordl_internal_set__ATGMeasuredWidth_k__BackingField(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set__ATGRoundedWidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__LastPixelPerPoint_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MeasuredWidth_k__BackingField(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set__RoundedWidth_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_atgHyperlinkColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_m_ATGTextEventHandler(::UnityEngine::UIElements::ATGTextEventHandler*  value) ;

constexpr void __cordl_internal_set_m_Links(::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::UnityEngine::TextCore::RichTextTagParser_TagType,::StringW>>*  value) ;

constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement*  value) ;

constexpr void __cordl_internal_set_m_TextEventHandler(::UnityEngine::UIElements::TextEventHandler*  value) ;

constexpr void __cordl_internal_set_uvsAreGenerated(bool  value) ;

/// @brief Method .ctor, addr 0x1823f8920, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::TextElement*  te) ;

static inline float_t getStaticF_k_MinPadding() ;

static inline Il2CppObject* getStaticF_s_TextLib() ;

/// @brief Method get_ATGMeasuredWidth, addr 0x1823f89c0, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> get_ATGMeasuredWidth() ;

/// @brief Method get_ATGRoundedWidth, addr 0x180468f80, size 0x10, virtual false, abstract: false, final false
inline float_t get_ATGRoundedWidth() ;

/// @brief Method get_IsPlaceholder, addr 0x1823f89d0, size 0x40, virtual true, abstract: false, final false
inline bool get_IsPlaceholder() ;

/// @brief Method get_LastPixelPerPoint, addr 0x1804979e0, size 0x10, virtual false, abstract: false, final false
inline float_t get_LastPixelPerPoint() ;

/// @brief Method get_Links, addr 0x1823f8a10, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::UnityEngine::TextCore::RichTextTagParser_TagType,::StringW>>* get_Links() ;

/// @brief Method get_MeasuredWidth, addr 0x180371810, size 0x10, virtual false, abstract: false, final false
inline ::System::Nullable_1<float_t> get_MeasuredWidth() ;

/// @brief Method get_RoundedWidth, addr 0x1820c7f30, size 0x10, virtual false, abstract: false, final false
inline float_t get_RoundedWidth() ;

/// @brief Method get_textLib, addr 0x1823f8a70, size 0x30, virtual false, abstract: false, final false
inline Il2CppObject* get_textLib() ;

/// @brief Method hasLinkAndHyperlink, addr 0x1823f8aa0, size 0xf0, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<bool,bool> hasLinkAndHyperlink() ;

static inline void setStaticF_k_MinPadding(float_t  value) ;

static inline void setStaticF_s_TextLib(Il2CppObject*  value) ;

/// @brief Method set_ATGMeasuredWidth, addr 0x1823f8b90, size 0x10, virtual false, abstract: false, final false
inline void set_ATGMeasuredWidth(::System::Nullable_1<float_t>  value) ;

/// @brief Method set_ATGRoundedWidth, addr 0x1823f8ba0, size 0x10, virtual false, abstract: false, final false
inline void set_ATGRoundedWidth(float_t  value) ;

/// @brief Method set_LastPixelPerPoint, addr 0x1823f8bb0, size 0x10, virtual false, abstract: false, final false
inline void set_LastPixelPerPoint(float_t  value) ;

/// @brief Method set_MeasuredWidth, addr 0x1823f8bc0, size 0x10, virtual false, abstract: false, final false
inline void set_MeasuredWidth(::System::Nullable_1<float_t>  value) ;

/// @brief Method set_RoundedWidth, addr 0x18040bf30, size 0x10, virtual false, abstract: false, final false
inline void set_RoundedWidth(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UITKTextHandle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UITKTextHandle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UITKTextHandle(UITKTextHandle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UITKTextHandle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UITKTextHandle(UITKTextHandle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4286};

/// @brief Field m_ATGTextEventHandler, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::UIElements::ATGTextEventHandler*  ___m_ATGTextEventHandler;

/// @brief Field m_Links, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::ValueTuple_3<int32_t,::UnityEngine::TextCore::RichTextTagParser_TagType,::StringW>>*  ___m_Links;

/// @brief Field atgHyperlinkColor, offset: 0xd8, size: 0x10, def value: None
 ::UnityEngine::Color  ___atgHyperlinkColor;

/// @brief Field uvsAreGenerated, offset: 0xe8, size: 0x1, def value: None
 bool  ___uvsAreGenerated;

/// @brief Field <LastPixelPerPoint>k__BackingField, offset: 0xec, size: 0x4, def value: None
 float_t  ____LastPixelPerPoint_k__BackingField;

/// @brief Field <MeasuredWidth>k__BackingField, offset: 0xf0, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ____MeasuredWidth_k__BackingField;

/// @brief Field <RoundedWidth>k__BackingField, offset: 0xf8, size: 0x4, def value: None
 float_t  ____RoundedWidth_k__BackingField;

/// @brief Field <ATGMeasuredWidth>k__BackingField, offset: 0xfc, size: 0x8, def value: None
 ::System::Nullable_1<float_t>  ____ATGMeasuredWidth_k__BackingField;

/// @brief Field <ATGRoundedWidth>k__BackingField, offset: 0x104, size: 0x4, def value: None
 float_t  ____ATGRoundedWidth_k__BackingField;

/// @brief Field m_TextEventHandler, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::UIElements::TextEventHandler*  ___m_TextEventHandler;

/// @brief Field m_TextElement, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::UIElements::TextElement*  ___m_TextElement;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_ATGTextEventHandler) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_Links) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___atgHyperlinkColor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___uvsAreGenerated) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____LastPixelPerPoint_k__BackingField) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____MeasuredWidth_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____RoundedWidth_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____ATGMeasuredWidth_k__BackingField) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____ATGRoundedWidth_k__BackingField) == 0x104, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_TextEventHandler) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_TextElement) == 0x110, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UITKTextHandle) == 0x118, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
