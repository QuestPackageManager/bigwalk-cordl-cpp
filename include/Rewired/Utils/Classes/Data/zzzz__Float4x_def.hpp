#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/Float4x.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Float4x)
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
struct Float4x;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Data::Float4x);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::Float4x, "Rewired.Utils.Classes.Data", "Float4x");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.Float4x
struct CORDL_TYPE Float4x {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

/// @brief Field _additionDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__additionDelegate, put=setStaticF__additionDelegate)) ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  _additionDelegate;

/// @brief Field _divisionDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__divisionDelegate, put=setStaticF__divisionDelegate)) ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  _divisionDelegate;

/// @brief Field _multiplicationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__multiplicationDelegate, put=setStaticF__multiplicationDelegate)) ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  _multiplicationDelegate;

/// @brief Field _subtractionDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__subtractionDelegate, put=setStaticF__subtractionDelegate)) ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  _subtractionDelegate;

/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>"
constexpr operator  ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>*() ;

/// @brief Method Add, addr 0x1819532c0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x Add(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2) ;

/// @brief Method Clone, addr 0x181953320, size 0x50, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::Float4x Clone() ;

/// @brief Method Clone, addr 0x181953320, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x Clone(::Rewired::Utils::Classes::Data::Float4x  obj) ;

/// @brief Method Divide, addr 0x181953370, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x Divide(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2) ;

/// @brief Method Equals, addr 0x1819533d0, size 0xa0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x180646bf0, size 0x40, virtual true, abstract: false, final true
inline bool Equals(::Rewired::Utils::Classes::Data::Float4x  other) ;

/// @brief Method GetAdditionDelegate, addr 0x181953470, size 0x90, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* GetAdditionDelegate() ;

/// @brief Method GetDivisionDelegate, addr 0x181953500, size 0x90, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* GetDivisionDelegate() ;

/// @brief Method GetHashCode, addr 0x1818da9b0, size 0x80, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMultiplicationDelegate, addr 0x181953590, size 0x90, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* GetMultiplicationDelegate() ;

/// @brief Method GetSubtractionDelegate, addr 0x181953620, size 0x90, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* GetSubtractionDelegate() ;

/// @brief Method Multiply, addr 0x1819536b0, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x Multiply(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2) ;

/// @brief Method Subtract, addr 0x181953710, size 0x60, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x Subtract(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2) ;

/// @brief Method ToString, addr 0x181953770, size 0x100, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1802d5420, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1, float_t  _cordl_fixed_empty_name_whitespace_param_2, float_t  _cordl_fixed_empty_name_whitespace_param_3) ;

static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* getStaticF__additionDelegate() ;

static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* getStaticF__divisionDelegate() ;

static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* getStaticF__multiplicationDelegate() ;

static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>* getStaticF__subtractionDelegate() ;

/// @brief Method get_Item, addr 0x181953870, size 0x60, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_Zero, addr 0x1802e1e90, size 0x10, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x get_Zero() ;

/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float4x>* i___System__IEquatable_1___Rewired__Utils__Classes__Data__Float4x_() ;

/// @brief Method op_Addition, addr 0x1819538d0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Addition(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2) ;

/// @brief Method op_Addition, addr 0x1819538f0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Addition(::Rewired::Utils::Classes::Data::Float4x  value1, float_t  value2) ;

/// @brief Method op_Division, addr 0x181953910, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Division(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2) ;

/// @brief Method op_Division, addr 0x181953930, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Division(::Rewired::Utils::Classes::Data::Float4x  value1, float_t  value2) ;

/// @brief Method op_Implicit, addr 0x181953320, size 0x50, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Implicit___Rewired__Utils__Classes__Data__Float4x(::UnityEngine::Vector4  obj) ;

/// @brief Method op_Implicit, addr 0x181953320, size 0x50, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector4 op_Implicit___UnityEngine__Vector4(::Rewired::Utils::Classes::Data::Float4x  obj) ;

/// @brief Method op_Multiply, addr 0x181953950, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Multiply(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2) ;

/// @brief Method op_Multiply, addr 0x181953970, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Multiply(::Rewired::Utils::Classes::Data::Float4x  value1, float_t  value2) ;

/// @brief Method op_Subtraction, addr 0x181953990, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Subtraction(::Rewired::Utils::Classes::Data::Float4x  value1, ::Rewired::Utils::Classes::Data::Float4x  value2) ;

/// @brief Method op_Subtraction, addr 0x1819539b0, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float4x op_Subtraction(::Rewired::Utils::Classes::Data::Float4x  value1, float_t  value2) ;

static inline void setStaticF__additionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  value) ;

static inline void setStaticF__divisionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  value) ;

static inline void setStaticF__multiplicationDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  value) ;

static inline void setStaticF__subtractionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x,::Rewired::Utils::Classes::Data::Float4x>*  value) ;

/// @brief Method set_Item, addr 0x1819539d0, size 0x60, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Float4x() ;

// Ctor Parameters [CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "c", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "d", ty: "float_t", modifiers: "", def_value: None }]
constexpr Float4x(float_t  a, float_t  b, float_t  c, float_t  d) noexcept;

/// @brief Field Length offset 0xffffffff size 0x4
static constexpr int32_t  Length{static_cast<int32_t>(0x4)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3052};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field a, offset: 0x0, size: 0x4, def value: None
 float_t  a;

/// @brief Field b, offset: 0x4, size: 0x4, def value: None
 float_t  b;

/// @brief Field c, offset: 0x8, size: 0x4, def value: None
 float_t  c;

/// @brief Field d, offset: 0xc, size: 0x4, def value: None
 float_t  d;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::Float4x, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::Float4x, b) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::Float4x, c) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::Float4x, d) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::Float4x) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
