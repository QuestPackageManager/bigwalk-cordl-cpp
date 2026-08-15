#pragma once
// IWYU pragma private; include "Mirror/Examples/AdditiveLevels/FadeInOut.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FadeInOut)
namespace Mirror::Examples::AdditiveLevels {
class FadeInOut__FadeIn_d__7;
}
namespace Mirror::Examples::AdditiveLevels {
class FadeInOut__FadeOut_d__8;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace Mirror::Examples::AdditiveLevels {
class FadeInOut;
}
namespace Mirror::Examples::AdditiveLevels {
class FadeInOut__FadeIn_d__7;
}
namespace Mirror::Examples::AdditiveLevels {
class FadeInOut__FadeOut_d__8;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::AdditiveLevels::FadeInOut*);
MARK_REF_T(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7*);
MARK_REF_T(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::FadeInOut*, "Mirror.Examples.AdditiveLevels", "FadeInOut");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7*, "Mirror.Examples.AdditiveLevels", "FadeInOut/<FadeIn>d__7");
DEFINE_IL2CPP_CLASS(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8*, "Mirror.Examples.AdditiveLevels", "FadeInOut/<FadeOut>d__8");
// Dependencies System.Object
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.FadeInOut/<FadeIn>d__7
class CORDL_TYPE FadeInOut__FadeIn_d__7 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  __4__this;

/// @brief Field <alpha>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__alpha_5__2, put=__cordl_internal_set__alpha_5__2)) float_t  _alpha_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18156bd60, size 0xf0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__alpha_5__2() const;

constexpr float_t& __cordl_internal_get__alpha_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  value) ;

constexpr void __cordl_internal_set__alpha_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FadeInOut__FadeIn_d__7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FadeInOut__FadeIn_d__7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FadeInOut__FadeIn_d__7(FadeInOut__FadeIn_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FadeInOut__FadeIn_d__7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FadeInOut__FadeIn_d__7(FadeInOut__FadeIn_d__7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19363};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  _____4__this;

/// @brief Field <alpha>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____alpha_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7, ____alpha_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
// Dependencies System.Object
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.FadeInOut/<FadeOut>d__8
class CORDL_TYPE FadeInOut__FadeOut_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  __4__this;

/// @brief Field <alpha>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__alpha_5__2, put=__cordl_internal_set__alpha_5__2)) float_t  _alpha_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x18156be50, size 0xf0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x1802eb7d0, size 0x10, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x1802ecc10, size 0x10, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__alpha_5__2() const;

constexpr float_t& __cordl_internal_get__alpha_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  value) ;

constexpr void __cordl_internal_set__alpha_5__2(float_t  value) ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FadeInOut__FadeOut_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FadeInOut__FadeOut_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FadeInOut__FadeOut_d__8(FadeInOut__FadeOut_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FadeInOut__FadeOut_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FadeInOut__FadeOut_d__8(FadeInOut__FadeOut_d__8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19364};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Mirror::Examples::AdditiveLevels::FadeInOut>  _____4__this;

/// @brief Field <alpha>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____alpha_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8, ____alpha_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8) == 0x30, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Mirror::Examples::AdditiveLevels {
// Is value type: false
// CS Name: Mirror.Examples.AdditiveLevels.FadeInOut
class CORDL_TYPE FadeInOut : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FadeIn_d__7 = ::Mirror::Examples::AdditiveLevels::FadeInOut__FadeIn_d__7;

using _FadeOut_d__8 = ::Mirror::Examples::AdditiveLevels::FadeInOut__FadeOut_d__8;

/// @brief Field fadeColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_fadeColor, put=__cordl_internal_set_fadeColor)) ::UnityEngine::Color  fadeColor;

/// @brief Field fadeImage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fadeImage, put=__cordl_internal_set_fadeImage)) ::UnityW<::UnityEngine::UI::Image>  fadeImage;

/// @brief Field step, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_step, put=__cordl_internal_set_step)) float_t  step;

/// @brief Field stepRate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_stepRate, put=__cordl_internal_set_stepRate)) uint8_t  stepRate;

/// @brief Method FadeIn, addr 0x181566ed0, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeIn() ;

/// @brief Method FadeOut, addr 0x181566f20, size 0x50, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* FadeOut() ;

/// @brief Method GetDuration, addr 0x181566f70, size 0x40, virtual false, abstract: false, final false
inline float_t GetDuration() ;

static inline ::Mirror::Examples::AdditiveLevels::FadeInOut* New_ctor() ;

/// @brief Method OnValidate, addr 0x181566fb0, size 0x50, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method Start, addr 0x181567000, size 0x20, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_fadeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_fadeColor() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_fadeImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_fadeImage() ;

constexpr float_t const& __cordl_internal_get_step() const;

constexpr float_t& __cordl_internal_get_step() ;

constexpr uint8_t const& __cordl_internal_get_stepRate() const;

constexpr uint8_t& __cordl_internal_get_stepRate() ;

constexpr void __cordl_internal_set_fadeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_fadeImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_step(float_t  value) ;

constexpr void __cordl_internal_set_stepRate(uint8_t  value) ;

/// @brief Method .ctor, addr 0x181567020, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FadeInOut() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FadeInOut", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FadeInOut(FadeInOut && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FadeInOut", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FadeInOut(FadeInOut const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19365};

/// @brief Field fadeImage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___fadeImage;

/// @brief Field fadeColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___fadeColor;

/// @brief Field stepRate, offset: 0x38, size: 0x1, def value: None
 uint8_t  ___stepRate;

/// @brief Field step, offset: 0x3c, size: 0x4, def value: None
 float_t  ___step;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut, ___fadeImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut, ___fadeColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut, ___stepRate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::AdditiveLevels::FadeInOut, ___step) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::AdditiveLevels::FadeInOut) == 0x40, "Size mismatch!");

} // namespace end def Mirror::Examples::AdditiveLevels
