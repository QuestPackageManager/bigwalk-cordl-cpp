#pragma once
// IWYU pragma private; include "Rewired/Utils/Classes/Utility/ValueWatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueWatcher)
namespace Rewired::Utils::Classes::Utility {
struct ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace Rewired::Utils::Classes::Utility {
struct ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY;
}
namespace Rewired::Utils::Classes::Utility {
class ValueWatcher;
}
// Write type traits
MARK_VAL_T(::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY);
MARK_REF_T(::Rewired::Utils::Classes::Utility::ValueWatcher*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY, "Rewired.Utils.Classes.Utility", "ValueWatcher/cwCCCzmjklmzLtXDCaZqsFdhCGFY");
DEFINE_IL2CPP_CLASS(::Rewired::Utils::Classes::Utility::ValueWatcher*, "Rewired.Utils.Classes.Utility", "ValueWatcher");
// Dependencies 
namespace Rewired::Utils::Classes::Utility {
// Is value type: true
// CS Name: Rewired.Utils.Classes.Utility.ValueWatcher/cwCCCzmjklmzLtXDCaZqsFdhCGFY
struct CORDL_TYPE ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY_Unwrapped
enum struct __ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY_Unwrapped : int32_t {
__E_ValueChanged = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY_Unwrapped () const noexcept {
return static_cast<__ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY(int32_t  value__) noexcept;

/// @brief Field ValueChanged value: I32(0)
static ::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY const ValueChanged;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2995};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY) == 0x4, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
// Dependencies System.Object
namespace Rewired::Utils::Classes::Utility {
// Is value type: false
// CS Name: Rewired.Utils.Classes.Utility.ValueWatcher
class CORDL_TYPE ValueWatcher : public ::System::Object {
public:
// Declarations
using cwCCCzmjklmzLtXDCaZqsFdhCGFY = ::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY;

 __declspec(property(get=get_autoTriggerEvent, put=set_autoTriggerEvent)) bool  autoTriggerEvent;

 __declspec(property(get=get_changed)) bool  changed;

/// @brief Method AddEventListener, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void AddEventListener(::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY  eventType, ::System::Delegate*  listener) ;

static inline ::Rewired::Utils::Classes::Utility::ValueWatcher* New_ctor() ;

/// @brief Method RemoveEventListener, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RemoveEventListener(::Rewired::Utils::Classes::Utility::ValueWatcher_cwCCCzmjklmzLtXDCaZqsFdhCGFY  eventType, ::System::Delegate*  listener) ;

/// @brief Method TriggerEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool TriggerEvent() ;

/// @brief Method Update, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Update() ;

/// @brief Method Use, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Use() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_autoTriggerEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_autoTriggerEvent() ;

/// @brief Method get_changed, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_changed() ;

/// @brief Method set_autoTriggerEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_autoTriggerEvent(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ValueWatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ValueWatcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ValueWatcher(ValueWatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ValueWatcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ValueWatcher(ValueWatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2996};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::Classes::Utility::ValueWatcher) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils::Classes::Utility
