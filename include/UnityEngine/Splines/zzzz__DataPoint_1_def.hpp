#pragma once
// IWYU pragma private; include "UnityEngine/Splines/DataPoint_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DataPoint_1)
namespace System {
template<typename T>
class IComparable_1;
}
namespace UnityEngine::Splines {
class IDataPoint;
}
// Forward declare root types
namespace UnityEngine::Splines {
template<typename TDataType>
struct DataPoint_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Splines::DataPoint_1);
DEFINE_IL2CPP_GEN_CLASS(::UnityEngine::Splines::DataPoint_1, "UnityEngine.Splines", "DataPoint`1");
// Dependencies 
namespace UnityEngine::Splines {
// cpp template
template<typename TDataType>
// Is value type: true
// CS Name: UnityEngine.Splines.DataPoint`1<TDataType>
struct CORDL_TYPE DataPoint_1 {
public:
// Declarations
 __declspec(property(get=get_Index, put=set_Index)) float_t  Index;

 __declspec(property(get=get_Value, put=set_Value)) TDataType  Value;

/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>"
constexpr operator  ::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>*() ;

/// @brief Convert operator to "::System::IComparable_1<float_t>"
constexpr operator  ::System::IComparable_1<float_t>*() ;

/// @brief Convert operator to "::UnityEngine::Splines::IDataPoint"
constexpr operator  ::UnityEngine::Splines::IDataPoint*() ;

/// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t CompareTo(::UnityEngine::Splines::DataPoint_1<TDataType>  other) ;

/// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t CompareTo(float_t  other) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(float_t  index, TDataType  value) ;

/// @brief Method get_Index, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline float_t get_Index() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TDataType get_Value() ;

/// @brief Convert to "::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>"
constexpr ::System::IComparable_1<::UnityEngine::Splines::DataPoint_1<TDataType>>* i___System__IComparable_1___UnityEngine__Splines__DataPoint_1_TDataType__() ;

/// @brief Convert to "::System::IComparable_1<float_t>"
constexpr ::System::IComparable_1<float_t>* i___System__IComparable_1_float_t_() ;

/// @brief Convert to "::UnityEngine::Splines::IDataPoint"
constexpr ::UnityEngine::Splines::IDataPoint* i___UnityEngine__Splines__IDataPoint() ;

/// @brief Method set_Index, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_Index(float_t  value) ;

/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(TDataType  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DataPoint_1() ;

// Ctor Parameters [CppParam { name: "m_Index", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Value", ty: "TDataType", modifiers: "", def_value: None }]
constexpr DataPoint_1(float_t  m_Index, TDataType  m_Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18684};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_Index, offset: 0x0, size: 0x4, def value: None
 float_t  m_Index;

/// @brief Field m_Value, offset: 0x8, size: 0x8, def value: None
 TDataType  m_Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Splines
