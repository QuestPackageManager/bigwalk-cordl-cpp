#pragma once
// IWYU pragma private; include "Mirror/Examples/Common/FPS.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FPS)
// Forward declare root types
namespace Mirror::Examples::Common {
class FPS;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Common::FPS*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Common::FPS*, "Mirror.Examples.Common", "FPS");
// Dependencies UnityEngine.MonoBehaviour
namespace Mirror::Examples::Common {
// Is value type: false
// CS Name: Mirror.Examples.Common.FPS
class CORDL_TYPE FPS : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <framesPerSecond>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__framesPerSecond_k__BackingField, put=__cordl_internal_set__framesPerSecond_k__BackingField)) int32_t  _framesPerSecond_k__BackingField;

/// @brief Field count, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

 __declspec(property(get=get_framesPerSecond, put=set_framesPerSecond)) int32_t  framesPerSecond;

/// @brief Field showGUI, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGUI, put=__cordl_internal_set_showGUI)) bool  showGUI;

/// @brief Field showLog, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_showLog, put=__cordl_internal_set_showLog)) bool  showLog;

/// @brief Field startTime, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) double_t  startTime;

static inline ::Mirror::Examples::Common::FPS* New_ctor() ;

/// @brief Method OnGUI, addr 0x18155a1e0, size 0xb0, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method Update, addr 0x18155a290, size 0x90, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get__framesPerSecond_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__framesPerSecond_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr bool const& __cordl_internal_get_showGUI() const;

constexpr bool& __cordl_internal_get_showGUI() ;

constexpr bool const& __cordl_internal_get_showLog() const;

constexpr bool& __cordl_internal_get_showLog() ;

constexpr double_t const& __cordl_internal_get_startTime() const;

constexpr double_t& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set__framesPerSecond_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

constexpr void __cordl_internal_set_showGUI(bool  value) ;

constexpr void __cordl_internal_set_showLog(bool  value) ;

constexpr void __cordl_internal_set_startTime(double_t  value) ;

/// @brief Method .ctor, addr 0x18155a320, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_framesPerSecond, addr 0x180396ee0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_framesPerSecond() ;

/// @brief Method set_framesPerSecond, addr 0x1803164e0, size 0x10, virtual false, abstract: false, final false
inline void set_framesPerSecond(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FPS() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FPS", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FPS(FPS && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FPS", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FPS(FPS const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19328};

/// @brief Field <framesPerSecond>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____framesPerSecond_k__BackingField;

/// @brief Field showGUI, offset: 0x24, size: 0x1, def value: None
 bool  ___showGUI;

/// @brief Field showLog, offset: 0x25, size: 0x1, def value: None
 bool  ___showLog;

/// @brief Field count, offset: 0x28, size: 0x4, def value: None
 int32_t  ___count;

/// @brief Field startTime, offset: 0x30, size: 0x8, def value: None
 double_t  ___startTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Common::FPS, ____framesPerSecond_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Common::FPS, ___showGUI) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Common::FPS, ___showLog) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Common::FPS, ___count) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Common::FPS, ___startTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Common::FPS) == 0x38, "Size mismatch!");

} // namespace end def Mirror::Examples::Common
