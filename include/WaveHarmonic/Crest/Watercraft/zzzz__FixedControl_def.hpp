#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/Watercraft/FixedControl.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WaveHarmonic/Crest/Watercraft/zzzz__Control_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedControl)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace WaveHarmonic::Crest::Watercraft {
class FixedControl;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::Watercraft::FixedControl*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::Watercraft::FixedControl*, "WaveHarmonic.Crest.Watercraft", "FixedControl");
// Dependencies WaveHarmonic.Crest.Watercraft.Control
namespace WaveHarmonic::Crest::Watercraft {
// Is value type: false
// CS Name: WaveHarmonic.Crest.Watercraft.FixedControl
class CORDL_TYPE FixedControl : public ::WaveHarmonic::Crest::Watercraft::Control {
public:
// Declarations
 __declspec(property(get=get_Input)) ::UnityEngine::Vector3  Input;

 __declspec(property(get=get_Move, put=set_Move)) float_t  Move;

 __declspec(property(get=get_Turn, put=set_Turn)) float_t  Turn;

/// @brief Field _Move, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__Move, put=__cordl_internal_set__Move)) float_t  _Move;

/// @brief Field _Turn, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Turn, put=__cordl_internal_set__Turn)) float_t  _Turn;

static inline ::WaveHarmonic::Crest::Watercraft::FixedControl* New_ctor() ;

constexpr float_t const& __cordl_internal_get__Move() const;

constexpr float_t& __cordl_internal_get__Move() ;

constexpr float_t const& __cordl_internal_get__Turn() const;

constexpr float_t& __cordl_internal_get__Turn() ;

constexpr void __cordl_internal_set__Move(float_t  value) ;

constexpr void __cordl_internal_set__Turn(float_t  value) ;

/// @brief Method .ctor, addr 0x180ba5300, size 0x4b0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Input, addr 0x1825a0f10, size 0x60, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_Input() ;

/// @brief Method get_Move, addr 0x1803f2be0, size 0x10, virtual false, abstract: false, final false
inline float_t get_Move() ;

/// @brief Method get_Turn, addr 0x18049a530, size 0x10, virtual false, abstract: false, final false
inline float_t get_Turn() ;

/// @brief Method set_Move, addr 0x1803f2c00, size 0x10, virtual false, abstract: false, final false
inline void set_Move(float_t  value) ;

/// @brief Method set_Turn, addr 0x180bb44a0, size 0x3450, virtual false, abstract: false, final false
inline void set_Turn(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedControl(FixedControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedControl(FixedControl const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16756};

/// @brief Field _Move, offset: 0x28, size: 0x4, def value: None
 float_t  ____Move;

/// @brief Field _Turn, offset: 0x2c, size: 0x4, def value: None
 float_t  ____Turn;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::FixedControl, ____Move) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::Watercraft::FixedControl, ____Turn) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::Watercraft::FixedControl) == 0x30, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest::Watercraft
