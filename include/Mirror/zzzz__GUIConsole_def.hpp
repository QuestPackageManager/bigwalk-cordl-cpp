#pragma once
// IWYU pragma private; include "Mirror/GUIConsole.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GUIConsole)
namespace Mirror {
struct LogEntry;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
struct LogType;
}
// Forward declare root types
namespace Mirror {
class GUIConsole;
}
// Write type traits
MARK_REF_T(::Mirror::GUIConsole*);
DEFINE_IL2CPP_CLASS(::Mirror::GUIConsole*, "Mirror", "GUIConsole");
// Dependencies UnityEngine.KeyCode, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Mirror {
// Is value type: false
// CS Name: Mirror.GUIConsole
class CORDL_TYPE GUIConsole : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field height, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field hotKey, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_hotKey, put=__cordl_internal_set_hotKey)) ::UnityEngine::KeyCode  hotKey;

/// @brief Field log, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_log, put=__cordl_internal_set_log)) ::System::Collections::Generic::Queue_1<::Mirror::LogEntry>*  log;

/// @brief Field maxLogCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxLogCount, put=__cordl_internal_set_maxLogCount)) int32_t  maxLogCount;

/// @brief Field scroll, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_scroll, put=__cordl_internal_set_scroll)) ::UnityEngine::Vector2  scroll;

/// @brief Field visible, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_visible, put=__cordl_internal_set_visible)) bool  visible;

/// @brief Method Awake, addr 0x181518370, size 0x50, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Mirror::GUIConsole* New_ctor() ;

/// @brief Method OnGUI, addr 0x1815183c0, size 0x280, virtual false, abstract: false, final false
inline void OnGUI() ;

/// @brief Method OnLog, addr 0x181518640, size 0x120, virtual false, abstract: false, final false
inline void OnLog(::StringW  message, ::StringW  stackTrace, ::UnityEngine::LogType  type) ;

/// @brief Method Update, addr 0x181518760, size 0x30, virtual false, abstract: false, final false
inline void Update() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_hotKey() const;

constexpr ::UnityEngine::KeyCode& __cordl_internal_get_hotKey() ;

constexpr ::System::Collections::Generic::Queue_1<::Mirror::LogEntry>* const& __cordl_internal_get_log() const;

constexpr ::System::Collections::Generic::Queue_1<::Mirror::LogEntry>*& __cordl_internal_get_log() ;

constexpr int32_t const& __cordl_internal_get_maxLogCount() const;

constexpr int32_t& __cordl_internal_get_maxLogCount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_scroll() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_scroll() ;

constexpr bool const& __cordl_internal_get_visible() const;

constexpr bool& __cordl_internal_get_visible() ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_hotKey(::UnityEngine::KeyCode  value) ;

constexpr void __cordl_internal_set_log(::System::Collections::Generic::Queue_1<::Mirror::LogEntry>*  value) ;

constexpr void __cordl_internal_set_maxLogCount(int32_t  value) ;

constexpr void __cordl_internal_set_scroll(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_visible(bool  value) ;

/// @brief Method .ctor, addr 0x181518790, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GUIConsole() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GUIConsole", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GUIConsole(GUIConsole && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GUIConsole", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GUIConsole(GUIConsole const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19224};

/// @brief Field height, offset: 0x20, size: 0x4, def value: None
 int32_t  ___height;

/// @brief Field maxLogCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ___maxLogCount;

/// @brief Field log, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Mirror::LogEntry>*  ___log;

/// @brief Field hotKey, offset: 0x30, size: 0x4, def value: None
 ::UnityEngine::KeyCode  ___hotKey;

/// @brief Field visible, offset: 0x34, size: 0x1, def value: None
 bool  ___visible;

/// @brief Field scroll, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___scroll;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::GUIConsole, ___height) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mirror::GUIConsole, ___maxLogCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mirror::GUIConsole, ___log) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mirror::GUIConsole, ___hotKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mirror::GUIConsole, ___visible) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mirror::GUIConsole, ___scroll) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Mirror::GUIConsole) == 0x40, "Size mismatch!");

} // namespace end def Mirror
