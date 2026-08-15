#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Data/Float2x.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Float2x)
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
struct Vector2;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Data {
struct Float2x;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Data::Float2x);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Data::Float2x, "Rewired.Utils.Classes.Data", "Float2x");
// Dependencies 
namespace Rewired::Utils::Classes::Data {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Data.Float2x
struct CORDL_TYPE Float2x {
public:
// Declarations
 __declspec(property(get=get_Item, put=set_Item)) float_t  Item[];

/// @brief Field _additionDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__additionDelegate, put=setStaticF__additionDelegate)) ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  _additionDelegate;

/// @brief Field _divisionDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__divisionDelegate, put=setStaticF__divisionDelegate)) ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  _divisionDelegate;

/// @brief Field _multiplicationDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__multiplicationDelegate, put=setStaticF__multiplicationDelegate)) ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  _multiplicationDelegate;

/// @brief Field _subtractionDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__subtractionDelegate, put=setStaticF__subtractionDelegate)) ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  _subtractionDelegate;

/// @brief Convert operator to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>"
constexpr operator  ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>*() ;

/// @brief Method Add, addr 0x1819525b0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x Add(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2) ;

/// @brief Method Clone, addr 0x180646ca0, size 0x20, virtual false, abstract: false, final false
inline ::Rewired::Utils::Classes::Data::Float2x Clone() ;

/// @brief Method Clone, addr 0x181913190, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x Clone(::Rewired::Utils::Classes::Data::Float2x  obj) ;

/// @brief Method Divide, addr 0x1819525f0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x Divide(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2) ;

/// @brief Method Equals, addr 0x181952630, size 0x80, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1802f60a0, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::Rewired::Utils::Classes::Data::Float2x  other) ;

/// @brief Method GetAdditionDelegate, addr 0x1819526b0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* GetAdditionDelegate() ;

/// @brief Method GetDivisionDelegate, addr 0x181952740, size 0x90, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* GetDivisionDelegate() ;

/// @brief Method GetHashCode, addr 0x1819527d0, size 0x50, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetMultiplicationDelegate, addr 0x181952820, size 0x90, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* GetMultiplicationDelegate() ;

/// @brief Method GetSubtractionDelegate, addr 0x1819528b0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* GetSubtractionDelegate() ;

/// @brief Method Multiply, addr 0x181952940, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x Multiply(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2) ;

/// @brief Method Subtract, addr 0x181952980, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x Subtract(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2) ;

/// @brief Method ToString, addr 0x1819529c0, size 0x50, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x1802d5750, size 0x20, virtual false, abstract: false, final false
inline void _ctor(float_t  _cordl_fixed_empty_name_whitespace, float_t  _cordl_fixed_empty_name_whitespace_param_1) ;

static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* getStaticF__additionDelegate() ;

static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* getStaticF__divisionDelegate() ;

static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* getStaticF__multiplicationDelegate() ;

static inline ::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>* getStaticF__subtractionDelegate() ;

/// @brief Method get_Item, addr 0x181952a10, size 0x40, virtual false, abstract: false, final false
inline float_t get_Item(int32_t  index) ;

/// @brief Method get_Zero, addr 0x180e8cfd0, size 0x7c30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x get_Zero() ;

/// @brief Convert to "::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>"
constexpr ::System::IEquatable_1<::Rewired::Utils::Classes::Data::Float2x>* i___System__IEquatable_1___Rewired__Utils__Classes__Data__Float2x_() ;

/// @brief Method op_Addition, addr 0x181952a50, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Addition(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2) ;

/// @brief Method op_Addition, addr 0x181952a90, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Addition(::Rewired::Utils::Classes::Data::Float2x  value1, float_t  value2) ;

/// @brief Method op_Division, addr 0x1819525f0, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Division(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2) ;

/// @brief Method op_Division, addr 0x181952ac0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Division(::Rewired::Utils::Classes::Data::Float2x  value1, float_t  value2) ;

/// @brief Method op_Implicit, addr 0x181913190, size 0x20, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Implicit___Rewired__Utils__Classes__Data__Float2x(::UnityEngine::Vector2  obj) ;

/// @brief Method op_Implicit, addr 0x181913190, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 op_Implicit___UnityEngine__Vector2(::Rewired::Utils::Classes::Data::Float2x  obj) ;

/// @brief Method op_Multiply, addr 0x181952b20, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Multiply(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2) ;

/// @brief Method op_Multiply, addr 0x181952af0, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Multiply(::Rewired::Utils::Classes::Data::Float2x  value1, float_t  value2) ;

/// @brief Method op_Subtraction, addr 0x181952980, size 0x40, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Subtraction(::Rewired::Utils::Classes::Data::Float2x  value1, ::Rewired::Utils::Classes::Data::Float2x  value2) ;

/// @brief Method op_Subtraction, addr 0x181952b60, size 0x30, virtual false, abstract: false, final false
static inline ::Rewired::Utils::Classes::Data::Float2x op_Subtraction(::Rewired::Utils::Classes::Data::Float2x  value1, float_t  value2) ;

static inline void setStaticF__additionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  value) ;

static inline void setStaticF__divisionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  value) ;

static inline void setStaticF__multiplicationDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  value) ;

static inline void setStaticF__subtractionDelegate(::System::Func_3<::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x,::Rewired::Utils::Classes::Data::Float2x>*  value) ;

/// @brief Method set_Item, addr 0x181952b90, size 0x40, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr Float2x() ;

// Ctor Parameters [CppParam { name: "a", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "b", ty: "float_t", modifiers: "", def_value: None }]
constexpr Float2x(float_t  a, float_t  b) noexcept;

/// @brief Field Length offset 0xffffffff size 0x4
static constexpr int32_t  Length{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field a, offset: 0x0, size: 0x4, def value: None
 float_t  a;

/// @brief Field b, offset: 0x4, size: 0x4, def value: None
 float_t  b;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Data::Float2x, a) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Rewired::Utils::Classes::Data::Float2x, b) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Data::Float2x) == 0x8, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Data
