#pragma once
// IWYU pragma private; include "Tayx/Graphy/G_GraphShader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_GraphShader)
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace Tayx::Graphy {
class G_GraphShader;
}
// Write type traits
MARK_REF_T(::Tayx::Graphy::G_GraphShader*);
DEFINE_IL2CPP_CLASS(::Tayx::Graphy::G_GraphShader*, "Tayx.Graphy", "G_GraphShader");
// Dependencies System.Object, UnityEngine.Color
namespace Tayx::Graphy {
// Is value type: false
// CS Name: Tayx.Graphy.G_GraphShader
class CORDL_TYPE G_GraphShader : public ::System::Object {
public:
// Declarations
/// @brief Field ArrayMaxSize, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_ArrayMaxSize, put=__cordl_internal_set_ArrayMaxSize)) int32_t  ArrayMaxSize;

/// @brief Field Average, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Average, put=__cordl_internal_set_Average)) float_t  Average;

/// @brief Field AveragePropertyId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_AveragePropertyId, put=setStaticF_AveragePropertyId)) int32_t  AveragePropertyId;

/// @brief Field CautionColor, offset 0x44, size 0x10 
 __declspec(property(get=__cordl_internal_get_CautionColor, put=__cordl_internal_set_CautionColor)) ::UnityEngine::Color  CautionColor;

/// @brief Field CautionColorPropertyId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CautionColorPropertyId, put=setStaticF_CautionColorPropertyId)) int32_t  CautionColorPropertyId;

/// @brief Field CautionThreshold, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_CautionThreshold, put=__cordl_internal_set_CautionThreshold)) float_t  CautionThreshold;

/// @brief Field CautionThresholdPropertyId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CautionThresholdPropertyId, put=setStaticF_CautionThresholdPropertyId)) int32_t  CautionThresholdPropertyId;

/// @brief Field CriticalColor, offset 0x54, size 0x10 
 __declspec(property(get=__cordl_internal_get_CriticalColor, put=__cordl_internal_set_CriticalColor)) ::UnityEngine::Color  CriticalColor;

/// @brief Field CriticalColorPropertyId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_CriticalColorPropertyId, put=setStaticF_CriticalColorPropertyId)) int32_t  CriticalColorPropertyId;

/// @brief Field GoodColor, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_GoodColor, put=__cordl_internal_set_GoodColor)) ::UnityEngine::Color  GoodColor;

/// @brief Field GoodColorPropertyId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GoodColorPropertyId, put=setStaticF_GoodColorPropertyId)) int32_t  GoodColorPropertyId;

/// @brief Field GoodThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_GoodThreshold, put=__cordl_internal_set_GoodThreshold)) float_t  GoodThreshold;

/// @brief Field GoodThresholdPropertyId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GoodThresholdPropertyId, put=setStaticF_GoodThresholdPropertyId)) int32_t  GoodThresholdPropertyId;

/// @brief Field GraphValues, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GraphValues, put=setStaticF_GraphValues)) int32_t  GraphValues;

/// @brief Field GraphValuesLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_GraphValuesLength, put=setStaticF_GraphValuesLength)) int32_t  GraphValuesLength;

/// @brief Field Image, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Image, put=__cordl_internal_set_Image)) ::UnityW<::UnityEngine::UI::Image>  Image;

/// @brief Field ShaderArrayValues, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShaderArrayValues, put=__cordl_internal_set_ShaderArrayValues)) ::ArrayW<float_t>  ShaderArrayValues;

/// @brief Method InitializeShader, addr 0x181e51330, size 0x80, virtual false, abstract: false, final false
inline void InitializeShader() ;

static inline ::Tayx::Graphy::G_GraphShader* New_ctor() ;

/// @brief Method UpdateArrayValuesLength, addr 0x181e513b0, size 0x60, virtual false, abstract: false, final false
inline void UpdateArrayValuesLength() ;

/// @brief Method UpdateAverage, addr 0x181e51410, size 0x60, virtual false, abstract: false, final false
inline void UpdateAverage() ;

/// @brief Method UpdateColors, addr 0x181e51470, size 0x110, virtual false, abstract: false, final false
inline void UpdateColors() ;

/// @brief Method UpdatePoints, addr 0x181e51580, size 0x60, virtual false, abstract: false, final false
inline void UpdatePoints() ;

/// @brief Method UpdateThresholds, addr 0x181e515e0, size 0xa0, virtual false, abstract: false, final false
inline void UpdateThresholds() ;

constexpr int32_t const& __cordl_internal_get_ArrayMaxSize() const;

constexpr int32_t& __cordl_internal_get_ArrayMaxSize() ;

constexpr float_t const& __cordl_internal_get_Average() const;

constexpr float_t& __cordl_internal_get_Average() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_CautionColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_CautionColor() ;

constexpr float_t const& __cordl_internal_get_CautionThreshold() const;

constexpr float_t& __cordl_internal_get_CautionThreshold() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_CriticalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_CriticalColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_GoodColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_GoodColor() ;

constexpr float_t const& __cordl_internal_get_GoodThreshold() const;

constexpr float_t& __cordl_internal_get_GoodThreshold() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_Image() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_Image() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_ShaderArrayValues() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_ShaderArrayValues() ;

constexpr void __cordl_internal_set_ArrayMaxSize(int32_t  value) ;

constexpr void __cordl_internal_set_Average(float_t  value) ;

constexpr void __cordl_internal_set_CautionColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_CautionThreshold(float_t  value) ;

constexpr void __cordl_internal_set_CriticalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_GoodColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_GoodThreshold(float_t  value) ;

constexpr void __cordl_internal_set_Image(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_ShaderArrayValues(::ArrayW<float_t>  value) ;

/// @brief Method .ctor, addr 0x181e51790, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_AveragePropertyId() ;

static inline int32_t getStaticF_CautionColorPropertyId() ;

static inline int32_t getStaticF_CautionThresholdPropertyId() ;

static inline int32_t getStaticF_CriticalColorPropertyId() ;

static inline int32_t getStaticF_GoodColorPropertyId() ;

static inline int32_t getStaticF_GoodThresholdPropertyId() ;

static inline int32_t getStaticF_GraphValues() ;

static inline int32_t getStaticF_GraphValuesLength() ;

static inline void setStaticF_AveragePropertyId(int32_t  value) ;

static inline void setStaticF_CautionColorPropertyId(int32_t  value) ;

static inline void setStaticF_CautionThresholdPropertyId(int32_t  value) ;

static inline void setStaticF_CriticalColorPropertyId(int32_t  value) ;

static inline void setStaticF_GoodColorPropertyId(int32_t  value) ;

static inline void setStaticF_GoodThresholdPropertyId(int32_t  value) ;

static inline void setStaticF_GraphValues(int32_t  value) ;

static inline void setStaticF_GraphValuesLength(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr G_GraphShader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "G_GraphShader", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_GraphShader(G_GraphShader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_GraphShader", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_GraphShader(G_GraphShader const& ) = delete;

/// @brief Field ArrayMaxSizeFull offset 0xffffffff size 0x4
static constexpr int32_t  ArrayMaxSizeFull{static_cast<int32_t>(0x200)};

/// @brief Field ArrayMaxSizeLight offset 0xffffffff size 0x4
static constexpr int32_t  ArrayMaxSizeLight{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20288};

/// @brief Field ArrayMaxSize, offset: 0x10, size: 0x4, def value: None
 int32_t  ___ArrayMaxSize;

/// @brief Field ShaderArrayValues, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<float_t>  ___ShaderArrayValues;

/// @brief Field Image, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___Image;

/// @brief Field Average, offset: 0x28, size: 0x4, def value: None
 float_t  ___Average;

/// @brief Field GoodThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___GoodThreshold;

/// @brief Field CautionThreshold, offset: 0x30, size: 0x4, def value: None
 float_t  ___CautionThreshold;

/// @brief Field GoodColor, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ___GoodColor;

/// @brief Field CautionColor, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Color  ___CautionColor;

/// @brief Field CriticalColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  ___CriticalColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___ArrayMaxSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___ShaderArrayValues) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___Image) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___Average) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___GoodThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___CautionThreshold) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___GoodColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___CautionColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Tayx::Graphy::G_GraphShader, ___CriticalColor) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Tayx::Graphy::G_GraphShader) == 0x68, "Size mismatch!");

} // namespace end def Tayx::Graphy
