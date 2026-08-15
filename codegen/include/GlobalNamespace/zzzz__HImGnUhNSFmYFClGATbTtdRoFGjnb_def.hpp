#pragma once
// IWYU pragma private; include "GlobalNamespace/HImGnUhNSFmYFClGATbTtdRoFGjnb.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(HImGnUhNSFmYFClGATbTtdRoFGjnb)
namespace System {
class AsyncCallback;
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
namespace GlobalNamespace {
template<typename ,typename ,typename >
class HImGnUhNSFmYFClGATbTtdRoFGjnb;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::HImGnUhNSFmYFClGATbTtdRoFGjnb);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::HImGnUhNSFmYFClGATbTtdRoFGjnb, "", "HImGnUhNSFmYFClGATbTtdRoFGjnb");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename ,typename ,typename >
// Is value type: false
// CS Name: HImGnUhNSFmYFClGATbTtdRoFGjnb<,,>
class CORDL_TYPE HImGnUhNSFmYFClGATbTtdRoFGjnb : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(  paramT1,   paramT2, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline  EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline  Invoke(  paramT1,   paramT2) ;

static inline ::GlobalNamespace::HImGnUhNSFmYFClGATbTtdRoFGjnb<,,>* New_ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  _cordl_fixed_empty_name_whitespace, ::System::IntPtr  _cordl_fixed_empty_name_whitespace_param_1) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HImGnUhNSFmYFClGATbTtdRoFGjnb() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HImGnUhNSFmYFClGATbTtdRoFGjnb", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HImGnUhNSFmYFClGATbTtdRoFGjnb(HImGnUhNSFmYFClGATbTtdRoFGjnb && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HImGnUhNSFmYFClGATbTtdRoFGjnb", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HImGnUhNSFmYFClGATbTtdRoFGjnb(HImGnUhNSFmYFClGATbTtdRoFGjnb const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{6102};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
