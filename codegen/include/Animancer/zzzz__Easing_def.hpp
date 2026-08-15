#pragma once
// IWYU pragma private; include "Animancer/Easing.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Easing)
namespace Animancer {
class Easing_Back;
}
namespace Animancer {
class Easing_Bounce;
}
namespace Animancer {
class Easing_Circular;
}
namespace Animancer {
class Easing_Cubic;
}
namespace Animancer {
class Easing_Elastic;
}
namespace Animancer {
class Easing_Exponential;
}
namespace Animancer {
struct Easing_Function;
}
namespace Animancer {
class Easing_Quadratic;
}
namespace Animancer {
class Easing_Quartic;
}
namespace Animancer {
class Easing_Quintic;
}
namespace Animancer {
class Easing_RangedDelegate;
}
namespace Animancer {
class Easing_Sine;
}
namespace System {
class AsyncCallback;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Animancer {
struct Easing_Function;
}
namespace Animancer {
class Easing;
}
namespace Animancer {
class Easing_Back;
}
namespace Animancer {
class Easing_Bounce;
}
namespace Animancer {
class Easing_Circular;
}
namespace Animancer {
class Easing_Cubic;
}
namespace Animancer {
class Easing_Elastic;
}
namespace Animancer {
class Easing_Exponential;
}
namespace Animancer {
class Easing_Quadratic;
}
namespace Animancer {
class Easing_Quartic;
}
namespace Animancer {
class Easing_Quintic;
}
namespace Animancer {
class Easing_RangedDelegate;
}
namespace Animancer {
class Easing_Sine;
}
// Write type traits
MARK_VAL_T(::Animancer::Easing_Function);
MARK_REF_T(::Animancer::Easing*);
MARK_REF_T(::Animancer::Easing_Back*);
MARK_REF_T(::Animancer::Easing_Bounce*);
MARK_REF_T(::Animancer::Easing_Circular*);
MARK_REF_T(::Animancer::Easing_Cubic*);
MARK_REF_T(::Animancer::Easing_Elastic*);
MARK_REF_T(::Animancer::Easing_Exponential*);
MARK_REF_T(::Animancer::Easing_Quadratic*);
MARK_REF_T(::Animancer::Easing_Quartic*);
MARK_REF_T(::Animancer::Easing_Quintic*);
MARK_REF_T(::Animancer::Easing_RangedDelegate*);
MARK_REF_T(::Animancer::Easing_Sine*);
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Function, "Animancer", "Easing/Function");
DEFINE_IL2CPP_CLASS(::Animancer::Easing*, "Animancer", "Easing");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Back*, "Animancer", "Easing/Back");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Bounce*, "Animancer", "Easing/Bounce");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Circular*, "Animancer", "Easing/Circular");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Cubic*, "Animancer", "Easing/Cubic");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Elastic*, "Animancer", "Easing/Elastic");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Exponential*, "Animancer", "Easing/Exponential");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Quadratic*, "Animancer", "Easing/Quadratic");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Quartic*, "Animancer", "Easing/Quartic");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Quintic*, "Animancer", "Easing/Quintic");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_RangedDelegate*, "Animancer", "Easing/RangedDelegate");
DEFINE_IL2CPP_CLASS(::Animancer::Easing_Sine*, "Animancer", "Easing/Sine");
// Dependencies System.MulticastDelegate
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/RangedDelegate
class CORDL_TYPE Easing_RangedDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x180313b80, size 0x90, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(float_t  start, float_t  end, float_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x180313c10, size 0x30, virtual true, abstract: false, final false
inline float_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x180313c40, size 0xd0, virtual true, abstract: false, final false
inline float_t Invoke(float_t  start, float_t  end, float_t  value) ;

static inline ::Animancer::Easing_RangedDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x180313d10, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_RangedDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_RangedDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_RangedDelegate(Easing_RangedDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_RangedDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_RangedDelegate(Easing_RangedDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18170};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_RangedDelegate) == 0x80, "Size mismatch!");

} // namespace end def Animancer
// Dependencies 
namespace Animancer {
// Is value type: true
// CS Name: Animancer.Easing/Function
struct CORDL_TYPE Easing_Function {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Easing_Function_Unwrapped
enum struct __Easing_Function_Unwrapped : int32_t {
__E_Linear = static_cast<int32_t>(0x0),
__E_QuadraticIn = static_cast<int32_t>(0x1),
__E_QuadraticOut = static_cast<int32_t>(0x2),
__E_QuadraticInOut = static_cast<int32_t>(0x3),
__E_CubicIn = static_cast<int32_t>(0x4),
__E_CubicOut = static_cast<int32_t>(0x5),
__E_CubicInOut = static_cast<int32_t>(0x6),
__E_QuarticIn = static_cast<int32_t>(0x7),
__E_QuarticOut = static_cast<int32_t>(0x8),
__E_QuarticInOut = static_cast<int32_t>(0x9),
__E_QuinticIn = static_cast<int32_t>(0xa),
__E_QuinticOut = static_cast<int32_t>(0xb),
__E_QuinticInOut = static_cast<int32_t>(0xc),
__E_SineIn = static_cast<int32_t>(0xd),
__E_SineOut = static_cast<int32_t>(0xe),
__E_SineInOut = static_cast<int32_t>(0xf),
__E_ExponentialIn = static_cast<int32_t>(0x10),
__E_ExponentialOut = static_cast<int32_t>(0x11),
__E_ExponentialInOut = static_cast<int32_t>(0x12),
__E_CircularIn = static_cast<int32_t>(0x13),
__E_CircularOut = static_cast<int32_t>(0x14),
__E_CircularInOut = static_cast<int32_t>(0x15),
__E_BackIn = static_cast<int32_t>(0x16),
__E_BackOut = static_cast<int32_t>(0x17),
__E_BackInOut = static_cast<int32_t>(0x18),
__E_BounceIn = static_cast<int32_t>(0x19),
__E_BounceOut = static_cast<int32_t>(0x1a),
__E_BounceInOut = static_cast<int32_t>(0x1b),
__E_ElasticIn = static_cast<int32_t>(0x1c),
__E_ElasticOut = static_cast<int32_t>(0x1d),
__E_ElasticInOut = static_cast<int32_t>(0x1e),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Easing_Function_Unwrapped () const noexcept {
return static_cast<__Easing_Function_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Easing_Function() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Easing_Function(int32_t  value__) noexcept;

/// @brief Field BackIn value: I32(22)
static ::Animancer::Easing_Function const BackIn;

/// @brief Field BackInOut value: I32(24)
static ::Animancer::Easing_Function const BackInOut;

/// @brief Field BackOut value: I32(23)
static ::Animancer::Easing_Function const BackOut;

/// @brief Field BounceIn value: I32(25)
static ::Animancer::Easing_Function const BounceIn;

/// @brief Field BounceInOut value: I32(27)
static ::Animancer::Easing_Function const BounceInOut;

/// @brief Field BounceOut value: I32(26)
static ::Animancer::Easing_Function const BounceOut;

/// @brief Field CircularIn value: I32(19)
static ::Animancer::Easing_Function const CircularIn;

/// @brief Field CircularInOut value: I32(21)
static ::Animancer::Easing_Function const CircularInOut;

/// @brief Field CircularOut value: I32(20)
static ::Animancer::Easing_Function const CircularOut;

/// @brief Field CubicIn value: I32(4)
static ::Animancer::Easing_Function const CubicIn;

/// @brief Field CubicInOut value: I32(6)
static ::Animancer::Easing_Function const CubicInOut;

/// @brief Field CubicOut value: I32(5)
static ::Animancer::Easing_Function const CubicOut;

/// @brief Field ElasticIn value: I32(28)
static ::Animancer::Easing_Function const ElasticIn;

/// @brief Field ElasticInOut value: I32(30)
static ::Animancer::Easing_Function const ElasticInOut;

/// @brief Field ElasticOut value: I32(29)
static ::Animancer::Easing_Function const ElasticOut;

/// @brief Field ExponentialIn value: I32(16)
static ::Animancer::Easing_Function const ExponentialIn;

/// @brief Field ExponentialInOut value: I32(18)
static ::Animancer::Easing_Function const ExponentialInOut;

/// @brief Field ExponentialOut value: I32(17)
static ::Animancer::Easing_Function const ExponentialOut;

/// @brief Field Linear value: I32(0)
static ::Animancer::Easing_Function const Linear;

/// @brief Field QuadraticIn value: I32(1)
static ::Animancer::Easing_Function const QuadraticIn;

/// @brief Field QuadraticInOut value: I32(3)
static ::Animancer::Easing_Function const QuadraticInOut;

/// @brief Field QuadraticOut value: I32(2)
static ::Animancer::Easing_Function const QuadraticOut;

/// @brief Field QuarticIn value: I32(7)
static ::Animancer::Easing_Function const QuarticIn;

/// @brief Field QuarticInOut value: I32(9)
static ::Animancer::Easing_Function const QuarticInOut;

/// @brief Field QuarticOut value: I32(8)
static ::Animancer::Easing_Function const QuarticOut;

/// @brief Field QuinticIn value: I32(10)
static ::Animancer::Easing_Function const QuinticIn;

/// @brief Field QuinticInOut value: I32(12)
static ::Animancer::Easing_Function const QuinticInOut;

/// @brief Field QuinticOut value: I32(11)
static ::Animancer::Easing_Function const QuinticOut;

/// @brief Field SineIn value: I32(13)
static ::Animancer::Easing_Function const SineIn;

/// @brief Field SineInOut value: I32(15)
static ::Animancer::Easing_Function const SineInOut;

/// @brief Field SineOut value: I32(14)
static ::Animancer::Easing_Function const SineOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18171};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Animancer::Easing_Function, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Animancer::Easing_Function) == 0x4, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Quadratic
class CORDL_TYPE Easing_Quadratic : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x180313350, size 0x50, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x1803133a0, size 0x10, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x180313180, size 0x40, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x180313170, size 0x10, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x1803132c0, size 0x90, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x180313270, size 0x50, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x1803131c0, size 0x70, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180313230, size 0x40, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x180313440, size 0x50, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x180313410, size 0x30, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x1803133d0, size 0x40, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x1803133b0, size 0x20, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Quadratic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Quadratic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Quadratic(Easing_Quadratic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Quadratic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Quadratic(Easing_Quadratic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18172};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Quadratic) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Cubic
class CORDL_TYPE Easing_Cubic : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x180307570, size 0x40, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x180307560, size 0x10, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x1803073a0, size 0x40, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x1803073e0, size 0x10, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x180307480, size 0x90, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x180307510, size 0x50, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x1803073f0, size 0x60, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180307450, size 0x30, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x180307630, size 0x50, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x180307610, size 0x20, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x1803075b0, size 0x40, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x1803075f0, size 0x20, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Cubic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Cubic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Cubic(Easing_Cubic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Cubic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Cubic(Easing_Cubic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Cubic) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Quartic
class CORDL_TYPE Easing_Quartic : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x1803136d0, size 0x40, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x1803136c0, size 0x10, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x1803134b0, size 0x40, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x180313490, size 0x20, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x1803135c0, size 0xa0, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x180313660, size 0x60, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x1803134f0, size 0x80, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180313570, size 0x50, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x1803137b0, size 0x60, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x180313780, size 0x30, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x180313710, size 0x50, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x180313760, size 0x20, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Quartic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Quartic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Quartic(Easing_Quartic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Quartic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Quartic(Easing_Quartic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18174};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Quartic) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Quintic
class CORDL_TYPE Easing_Quintic : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x180313a10, size 0x40, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x180313a50, size 0x20, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x180313810, size 0x40, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x180313850, size 0x20, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x180313970, size 0xa0, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x180313910, size 0x60, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180313870, size 0x60, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x1803138d0, size 0x40, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x180313b20, size 0x60, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x180313af0, size 0x30, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x180313aa0, size 0x50, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x180313a70, size 0x30, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Quintic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Quintic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Quintic(Easing_Quintic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Quintic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Quintic(Easing_Quintic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18175};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Quintic) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Sine
class CORDL_TYPE Easing_Sine : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x180314c00, size 0x70, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x180314bd0, size 0x30, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x180314a20, size 0x70, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x180314a90, size 0x20, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x180314b60, size 0x70, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x180314b30, size 0x30, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180314ab0, size 0x60, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180314b10, size 0x20, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x180314d10, size 0x60, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x180314d00, size 0x10, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x180314c90, size 0x70, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x180314c70, size 0x20, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Sine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Sine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Sine(Easing_Sine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Sine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Sine(Easing_Sine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18176};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Sine) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Exponential
class CORDL_TYPE Easing_Exponential : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x18030c600, size 0x70, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x18030c5e0, size 0x20, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x18030c310, size 0x70, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x18030c380, size 0x40, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x18030c4c0, size 0xb0, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x18030c570, size 0x70, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x18030c3c0, size 0xa0, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x18030c460, size 0x60, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x18030c750, size 0x80, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x18030c720, size 0x30, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x18030c670, size 0x70, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x18030c6e0, size 0x40, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Exponential() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Exponential", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Exponential(Easing_Exponential && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Exponential", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Exponential(Easing_Exponential const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18177};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Exponential) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Circular
class CORDL_TYPE Easing_Circular : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x1803059a0, size 0x90, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x180305940, size 0x60, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x1803055a0, size 0x90, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x180305540, size 0x60, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x1803057b0, size 0xe0, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x180305890, size 0xb0, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180305630, size 0xe0, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180305710, size 0xa0, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x180305b30, size 0x80, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x180305bb0, size 0x30, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x180305a30, size 0xa0, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x180305ad0, size 0x60, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Circular() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Circular", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Circular(Easing_Circular && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Circular", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Circular(Easing_Circular const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18178};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Circular) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Back
class CORDL_TYPE Easing_Back : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x1803043f0, size 0x50, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x180304440, size 0x20, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x180304150, size 0x50, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x180304130, size 0x20, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x1803042d0, size 0xb0, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x180304380, size 0x70, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x1803041a0, size 0xc0, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180304260, size 0x70, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x180304520, size 0x60, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x180304580, size 0x30, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x180304460, size 0x80, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x1803044e0, size 0x40, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Back() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Back", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Back(Easing_Back && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Back", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Back(Easing_Back const& ) = delete;

/// @brief Field C offset 0xffffffff size 0x4
static constexpr float_t  C{static_cast<float_t>(1.758f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18179};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Back) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Bounce
class CORDL_TYPE Easing_Bounce : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x1803049f0, size 0x80, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x1803049b0, size 0x40, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x180304620, size 0xb0, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x1803045b0, size 0x70, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x1803048f0, size 0xc0, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x180304870, size 0x80, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x1803046d0, size 0xc0, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x180304790, size 0xe0, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x180304c40, size 0x60, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x180304b80, size 0xc0, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x180304ad0, size 0xb0, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x180304a70, size 0x60, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Bounce() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Bounce", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Bounce(Easing_Bounce && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Bounce", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Bounce(Easing_Bounce const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18180};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Bounce) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing/Elastic
class CORDL_TYPE Easing_Elastic : public ::System::Object {
public:
// Declarations
/// @brief Method In, addr 0x18030bb10, size 0xf0, virtual false, abstract: false, final false
static inline float_t In(float_t  start, float_t  end, float_t  value) ;

/// @brief Method In, addr 0x18030bc00, size 0xa0, virtual false, abstract: false, final false
static inline float_t In(float_t  value) ;

/// @brief Method InDerivative, addr 0x18030b450, size 0x130, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InDerivative, addr 0x18030b580, size 0xe0, virtual false, abstract: false, final false
static inline float_t InDerivative(float_t  value) ;

/// @brief Method InOut, addr 0x18030b970, size 0x1a0, virtual false, abstract: false, final false
static inline float_t InOut(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOut, addr 0x18030b820, size 0x150, virtual false, abstract: false, final false
static inline float_t InOut(float_t  value) ;

/// @brief Method InOutDerivative, addr 0x18030b660, size 0x50, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method InOutDerivative, addr 0x18030b6b0, size 0x170, virtual false, abstract: false, final false
static inline float_t InOutDerivative(float_t  value) ;

/// @brief Method Out, addr 0x18030bf10, size 0xf0, virtual false, abstract: false, final false
static inline float_t Out(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Out, addr 0x18030be70, size 0xa0, virtual false, abstract: false, final false
static inline float_t Out(float_t  value) ;

/// @brief Method OutDerivative, addr 0x18030bd60, size 0x110, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method OutDerivative, addr 0x18030bca0, size 0xc0, virtual false, abstract: false, final false
static inline float_t OutDerivative(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing_Elastic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing_Elastic", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing_Elastic(Easing_Elastic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing_Elastic", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing_Elastic(Easing_Elastic const& ) = delete;

/// @brief Field TwoThirdsPi offset 0xffffffff size 0x4
static constexpr float_t  TwoThirdsPi{static_cast<float_t>(2.0943952f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18181};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing_Elastic) == 0x10, "Size mismatch!");

} // namespace end def Animancer
// Dependencies Animancer.Easing::RangedDelegate, System.Func`2<T, TResult>, System.Object
namespace Animancer {
// Is value type: false
// CS Name: Animancer.Easing
class CORDL_TYPE Easing : public ::System::Object {
public:
// Declarations
using Back = ::Animancer::Easing_Back;

using Bounce = ::Animancer::Easing_Bounce;

using Circular = ::Animancer::Easing_Circular;

using Cubic = ::Animancer::Easing_Cubic;

using Elastic = ::Animancer::Easing_Elastic;

using Exponential = ::Animancer::Easing_Exponential;

using Function = ::Animancer::Easing_Function;

using Quadratic = ::Animancer::Easing_Quadratic;

using Quartic = ::Animancer::Easing_Quartic;

using Quintic = ::Animancer::Easing_Quintic;

using RangedDelegate = ::Animancer::Easing_RangedDelegate;

using Sine = ::Animancer::Easing_Sine;

/// @brief Field _DerivativeDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__DerivativeDelegates, put=setStaticF__DerivativeDelegates)) ::ArrayW<::System::Func_2<float_t,float_t>*>  _DerivativeDelegates;

/// @brief Field _FunctionDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__FunctionDelegates, put=setStaticF__FunctionDelegates)) ::ArrayW<::System::Func_2<float_t,float_t>*>  _FunctionDelegates;

/// @brief Field _RangedDerivativeDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__RangedDerivativeDelegates, put=setStaticF__RangedDerivativeDelegates)) ::ArrayW<::Animancer::Easing_RangedDelegate*>  _RangedDerivativeDelegates;

/// @brief Field _RangedFunctionDelegates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__RangedFunctionDelegates, put=setStaticF__RangedFunctionDelegates)) ::ArrayW<::Animancer::Easing_RangedDelegate*>  _RangedFunctionDelegates;

/// @brief Method GetDelegate, addr 0x18030a290, size 0x440, virtual false, abstract: false, final false
static inline ::System::Func_2<float_t,float_t>* GetDelegate(::Animancer::Easing_Function  function) ;

/// @brief Method GetDerivativeDelegate, addr 0x18030a6d0, size 0x440, virtual false, abstract: false, final false
static inline ::System::Func_2<float_t,float_t>* GetDerivativeDelegate(::Animancer::Easing_Function  function) ;

/// @brief Method GetRangedDelegate, addr 0x18030ab10, size 0x440, virtual false, abstract: false, final false
static inline ::Animancer::Easing_RangedDelegate* GetRangedDelegate(::Animancer::Easing_Function  function) ;

/// @brief Method GetRangedDerivativeDelegate, addr 0x18030af50, size 0x440, virtual false, abstract: false, final false
static inline ::Animancer::Easing_RangedDelegate* GetRangedDerivativeDelegate(::Animancer::Easing_Function  function) ;

/// @brief Method Lerp, addr 0x18030b390, size 0x10, virtual false, abstract: false, final false
static inline float_t Lerp(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Linear, addr 0x18030b3b0, size 0x10, virtual false, abstract: false, final false
static inline float_t Linear(float_t  start, float_t  end, float_t  value) ;

/// @brief Method Linear, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
static inline float_t Linear(float_t  value) ;

/// @brief Method LinearDerivative, addr 0x18030b3a0, size 0x10, virtual false, abstract: false, final false
static inline float_t LinearDerivative(float_t  start, float_t  end, float_t  value) ;

/// @brief Method LinearDerivative, addr 0x1802e30f0, size 0x10, virtual false, abstract: false, final false
static inline float_t LinearDerivative(float_t  value) ;

/// @brief Method ReScale, addr 0x18030b3c0, size 0x70, virtual false, abstract: false, final false
static inline float_t ReScale(float_t  start, float_t  end, float_t  value, ::System::Func_2<float_t,float_t>*  function) ;

/// @brief Method UnLerp, addr 0x18030b430, size 0x20, virtual false, abstract: false, final false
static inline float_t UnLerp(float_t  start, float_t  end, float_t  value) ;

static inline ::ArrayW<::System::Func_2<float_t,float_t>*> getStaticF__DerivativeDelegates() ;

static inline ::ArrayW<::System::Func_2<float_t,float_t>*> getStaticF__FunctionDelegates() ;

static inline ::ArrayW<::Animancer::Easing_RangedDelegate*> getStaticF__RangedDerivativeDelegates() ;

static inline ::ArrayW<::Animancer::Easing_RangedDelegate*> getStaticF__RangedFunctionDelegates() ;

static inline void setStaticF__DerivativeDelegates(::ArrayW<::System::Func_2<float_t,float_t>*>  value) ;

static inline void setStaticF__FunctionDelegates(::ArrayW<::System::Func_2<float_t,float_t>*>  value) ;

static inline void setStaticF__RangedDerivativeDelegates(::ArrayW<::Animancer::Easing_RangedDelegate*>  value) ;

static inline void setStaticF__RangedFunctionDelegates(::ArrayW<::Animancer::Easing_RangedDelegate*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing(Easing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing(Easing const& ) = delete;

/// @brief Field FunctionCount offset 0xffffffff size 0x4
static constexpr int32_t  FunctionCount{static_cast<int32_t>(0x1f)};

/// @brief Field Ln2 offset 0xffffffff size 0x4
static constexpr float_t  Ln2{static_cast<float_t>(0.6931472f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18182};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Animancer::Easing) == 0x10, "Size mismatch!");

} // namespace end def Animancer
