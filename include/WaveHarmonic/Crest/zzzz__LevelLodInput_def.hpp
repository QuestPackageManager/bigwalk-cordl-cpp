#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LevelLodInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LevelLodInput)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class IReportsHeight;
}
namespace WaveHarmonic::Crest {
class LevelLodInput_Reporter;
}
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class LevelLodInput;
}
namespace WaveHarmonic::Crest {
class LevelLodInput_Reporter;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::LevelLodInput*);
MARK_REF_T(::WaveHarmonic::Crest::LevelLodInput_Reporter*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LevelLodInput*, "WaveHarmonic.Crest", "LevelLodInput");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LevelLodInput_Reporter*, "WaveHarmonic.Crest", "LevelLodInput/Reporter");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LevelLodInput/Reporter
class CORDL_TYPE LevelLodInput_Reporter : public ::System::Object {
public:
// Declarations
/// @brief Field _Input, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Input, put=__cordl_internal_set__Input)) ::UnityW<::WaveHarmonic::Crest::LevelLodInput>  _Input;

/// @brief Convert operator to "::WaveHarmonic::Crest::IReportsHeight"
constexpr operator  ::WaveHarmonic::Crest::IReportsHeight*() noexcept;

static inline ::WaveHarmonic::Crest::LevelLodInput_Reporter* New_ctor(::WaveHarmonic::Crest::LevelLodInput*  input) ;

/// @brief Method ReportHeight, addr 0x18255bdf0, size 0x30, virtual true, abstract: false, final true
inline bool ReportHeight(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  minimum, ::by_ref<float_t>  maximum) ;

constexpr ::UnityW<::WaveHarmonic::Crest::LevelLodInput> const& __cordl_internal_get__Input() const;

constexpr ::UnityW<::WaveHarmonic::Crest::LevelLodInput>& __cordl_internal_get__Input() ;

constexpr void __cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::LevelLodInput>  value) ;

/// @brief Method .ctor, addr 0x180308500, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::LevelLodInput*  input) ;

/// @brief Convert to "::WaveHarmonic::Crest::IReportsHeight"
constexpr ::WaveHarmonic::Crest::IReportsHeight* i___WaveHarmonic__Crest__IReportsHeight() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LevelLodInput_Reporter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LevelLodInput_Reporter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelLodInput_Reporter(LevelLodInput_Reporter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelLodInput_Reporter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelLodInput_Reporter(LevelLodInput_Reporter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16534};

/// @brief Field _Input, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::WaveHarmonic::Crest::LevelLodInput>  ____Input;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::LevelLodInput_Reporter, ____Input) == 0x10, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::LevelLodInput_Reporter) == 0x18, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Vector2, WaveHarmonic.Crest.LodInput
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LevelLodInput
class CORDL_TYPE LevelLodInput : public ::WaveHarmonic::Crest::LodInput {
public:
// Declarations
using Reporter = ::WaveHarmonic::Crest::LevelLodInput_Reporter;

 __declspec(property(get=get_DefaultMode)) ::WaveHarmonic::Crest::LodInputMode  DefaultMode;

 __declspec(property(get=get_FollowHorizontalMotion)) bool  FollowHorizontalMotion;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_HeightRange, put=set_HeightRange)) ::UnityEngine::Vector2  HeightRange;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_OverrideHeight, put=set_OverrideHeight)) bool  OverrideHeight;

 __declspec(property(get=get_Version)) int32_t  Version;

/// @brief Field _HeightRange, offset 0xb4, size 0x8 
 __declspec(property(get=__cordl_internal_get__HeightRange, put=__cordl_internal_set__HeightRange)) ::UnityEngine::Vector2  _HeightRange;

/// @brief Field _OverrideHeight, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__OverrideHeight, put=__cordl_internal_set__OverrideHeight)) bool  _OverrideHeight;

/// @brief Field _Reporter, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Reporter, put=__cordl_internal_set__Reporter)) ::WaveHarmonic::Crest::LevelLodInput_Reporter*  _Reporter;

/// @brief Method InferBlend, addr 0x182559f70, size 0x20, virtual true, abstract: false, final false
inline void InferBlend() ;

/// @brief Method Initialize, addr 0x182559f90, size 0xb0, virtual true, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::LevelLodInput* New_ctor() ;

/// @brief Method OnDisable, addr 0x18255a040, size 0x70, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnMigrate, addr 0x18255a0b0, size 0x20, virtual true, abstract: false, final false
inline void OnMigrate() ;

/// @brief Method ReportHeight, addr 0x18255a0d0, size 0x200, virtual false, abstract: false, final false
inline bool ReportHeight(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  minimum, ::by_ref<float_t>  maximum) ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__HeightRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__HeightRange() ;

constexpr bool const& __cordl_internal_get__OverrideHeight() const;

constexpr bool& __cordl_internal_get__OverrideHeight() ;

constexpr ::WaveHarmonic::Crest::LevelLodInput_Reporter* const& __cordl_internal_get__Reporter() const;

constexpr ::WaveHarmonic::Crest::LevelLodInput_Reporter*& __cordl_internal_get__Reporter() ;

constexpr void __cordl_internal_set__HeightRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__OverrideHeight(bool  value) ;

constexpr void __cordl_internal_set__Reporter(::WaveHarmonic::Crest::LevelLodInput_Reporter*  value) ;

/// @brief Method .ctor, addr 0x18255a2d0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultMode, addr 0x180feb5f0, size 0x28d50, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputMode get_DefaultMode() ;

/// @brief Method get_FollowHorizontalMotion, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_FollowHorizontalMotion() ;

/// @brief Method get_GizmoColor, addr 0x18255a360, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_HeightRange, addr 0x1817d59d0, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_HeightRange() ;

/// @brief Method get_Inputs, addr 0x18255a3a0, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_OverrideHeight, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_OverrideHeight() ;

/// @brief Method get_Version, addr 0x182550980, size 0x20, virtual true, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method set_HeightRange, addr 0x1817d5a60, size 0x10, virtual false, abstract: false, final false
inline void set_HeightRange(::UnityEngine::Vector2  value) ;

/// @brief Method set_OverrideHeight, addr 0x18140a480, size 0x10, virtual false, abstract: false, final false
inline void set_OverrideHeight(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LevelLodInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LevelLodInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelLodInput(LevelLodInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelLodInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelLodInput(LevelLodInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16535};

/// @brief Field _OverrideHeight, offset: 0xb0, size: 0x1, def value: None
 bool  ____OverrideHeight;

/// @brief Field _HeightRange, offset: 0xb4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____HeightRange;

/// @brief Field _Reporter, offset: 0xc0, size: 0x8, def value: None
 ::WaveHarmonic::Crest::LevelLodInput_Reporter*  ____Reporter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::LevelLodInput, ____OverrideHeight) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LevelLodInput, ____HeightRange) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::LevelLodInput, ____Reporter) == 0xc0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::LevelLodInput) == 0xc8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
