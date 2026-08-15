#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/PostProcessing/TargetPool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TargetPool)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::Rendering::PostProcessing {
class TargetPool;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::PostProcessing::TargetPool*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::PostProcessing::TargetPool*, "UnityEngine.Rendering.PostProcessing", "TargetPool");
// Dependencies System.Object
namespace UnityEngine::Rendering::PostProcessing {
// Is value type: false
// CS Name: UnityEngine.Rendering.PostProcessing.TargetPool
class CORDL_TYPE TargetPool : public ::System::Object {
public:
// Declarations
/// @brief Field m_Current, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Current, put=__cordl_internal_set_m_Current)) int32_t  m_Current;

/// @brief Field m_Pool, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Pool, put=__cordl_internal_set_m_Pool)) ::System::Collections::Generic::List_1<int32_t>*  m_Pool;

/// @brief Method Get, addr 0x181fd1980, size 0xc0, virtual false, abstract: false, final false
inline int32_t Get() ;

/// @brief Method Get, addr 0x181fd1a40, size 0xb0, virtual false, abstract: false, final false
inline int32_t Get(int32_t  i) ;

static inline ::UnityEngine::Rendering::PostProcessing::TargetPool* New_ctor() ;

/// @brief Method Reset, addr 0x181292ed0, size 0xff90, virtual false, abstract: false, final false
inline void Reset() ;

constexpr int32_t const& __cordl_internal_get_m_Current() const;

constexpr int32_t& __cordl_internal_get_m_Current() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_Pool() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_Pool() ;

constexpr void __cordl_internal_set_m_Current(int32_t  value) ;

constexpr void __cordl_internal_set_m_Pool(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x181fd1af0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TargetPool() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TargetPool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TargetPool(TargetPool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TargetPool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TargetPool(TargetPool const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18666};

/// @brief Field m_Pool, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_Pool;

/// @brief Field m_Current, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_Current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TargetPool, ___m_Pool) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::PostProcessing::TargetPool, ___m_Current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::PostProcessing::TargetPool) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::PostProcessing
