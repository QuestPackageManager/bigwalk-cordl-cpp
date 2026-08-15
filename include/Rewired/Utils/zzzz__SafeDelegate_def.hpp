#pragma once
// IWYU pragma private; include "Rewired/Utils/SafeDelegate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeDelegate)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Rewired::Utils {
class SafeDelegate;
}
// Write type traits
MARK_REF_T(::Rewired::Utils::SafeDelegate*);
DEFINE_IL2CPP_CLASS(::Rewired::Utils::SafeDelegate*, "Rewired.Utils", "SafeDelegate");
// Dependencies System.Object
namespace Rewired::Utils {
// Is value type: false
// CS Name: Rewired.Utils.SafeDelegate
class CORDL_TYPE SafeDelegate : public ::System::Object {
public:
// Declarations
/// @brief Field BlfOHmLBGtFRnTHBZdWwIDZtoZZ, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BlfOHmLBGtFRnTHBZdWwIDZtoZZ, put=setStaticF_BlfOHmLBGtFRnTHBZdWwIDZtoZZ)) ::System::Action_1<::System::Exception*>*  BlfOHmLBGtFRnTHBZdWwIDZtoZZ;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_ExceptionHandler, put=set_ExceptionHandler)) ::System::Action_1<::System::Exception*>*  ExceptionHandler;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method Clone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* Clone() ;

static inline ::Rewired::Utils::SafeDelegate* New_ctor() ;

/// @brief Method RemoveDelegateOrAllDelegatesFromAnObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void RemoveDelegateOrAllDelegatesFromAnObject(::System::Object*  obj) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::System::Exception*>* getStaticF_BlfOHmLBGtFRnTHBZdWwIDZtoZZ() ;

/// @brief Method get_Count, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_ExceptionHandler, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Action_1<::System::Exception*>* get_ExceptionHandler() ;

/// @brief Method get_S_ExceptionHandler, addr 0x18190d320, size 0x20, virtual false, abstract: false, final false
static inline ::System::Action_1<::System::Exception*>* get_S_ExceptionHandler() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

static inline void setStaticF_BlfOHmLBGtFRnTHBZdWwIDZtoZZ(::System::Action_1<::System::Exception*>*  value) ;

/// @brief Method set_ExceptionHandler, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_ExceptionHandler(::System::Action_1<::System::Exception*>*  value) ;

/// @brief Method set_S_ExceptionHandler, addr 0x18190d340, size 0x30, virtual false, abstract: false, final false
static inline void set_S_ExceptionHandler(::System::Action_1<::System::Exception*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SafeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SafeDelegate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SafeDelegate(SafeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SafeDelegate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SafeDelegate(SafeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2901};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Rewired::Utils::SafeDelegate) == 0x10, "Size mismatch!");

} // namespace end def Rewired::Utils
