#pragma once
// IWYU pragma private; include "GlobalNamespace/PaintedBody.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PaintedBody)
namespace GlobalNamespace {
class PlayerEyeSet;
}
namespace GlobalNamespace {
class PlayerLookSet;
}
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class PaintedBody;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PaintedBody*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PaintedBody*, "", "PaintedBody");
// Dependencies Mirror.NetworkBehaviour, UnityEngine.MeshRenderer
namespace GlobalNamespace {
// Is value type: false
// CS Name: PaintedBody
class CORDL_TYPE PaintedBody : public ::Mirror::NetworkBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkheadColorIndex, put=set_NetworkheadColorIndex)) int32_t  NetworkheadColorIndex;

 __declspec(property(get=get_NetworklegsColorIndex, put=set_NetworklegsColorIndex)) int32_t  NetworklegsColorIndex;

 __declspec(property(get=get_NetworktorsoColorIndex, put=set_NetworktorsoColorIndex)) int32_t  NetworktorsoColorIndex;

/// @brief Field eyeSet, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_eyeSet, put=__cordl_internal_set_eyeSet)) ::UnityW<::GlobalNamespace::PlayerEyeSet>  eyeSet;

/// @brief Field eyeSubmeshIndex, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_eyeSubmeshIndex, put=__cordl_internal_set_eyeSubmeshIndex)) int32_t  eyeSubmeshIndex;

/// @brief Field headColorIndex, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_headColorIndex, put=__cordl_internal_set_headColorIndex)) int32_t  headColorIndex;

/// @brief Field headItself, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_headItself, put=__cordl_internal_set_headItself)) ::UnityW<::UnityEngine::MeshRenderer>  headItself;

/// @brief Field headParts, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_headParts, put=__cordl_internal_set_headParts)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  headParts;

/// @brief Field legsColorIndex, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_legsColorIndex, put=__cordl_internal_set_legsColorIndex)) int32_t  legsColorIndex;

/// @brief Field legsParts, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_legsParts, put=__cordl_internal_set_legsParts)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  legsParts;

/// @brief Field lookSet, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookSet, put=__cordl_internal_set_lookSet)) ::UnityW<::GlobalNamespace::PlayerLookSet>  lookSet;

/// @brief Field materialPropertyBlock, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialPropertyBlock, put=__cordl_internal_set_materialPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  materialPropertyBlock;

/// @brief Field torsoColorIndex, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_torsoColorIndex, put=__cordl_internal_set_torsoColorIndex)) int32_t  torsoColorIndex;

/// @brief Field torsoParts, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_torsoParts, put=__cordl_internal_set_torsoParts)) ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  torsoParts;

/// @brief Method Awake, addr 0x180405410, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DeserializeSyncVars, addr 0x180405590, size 0x2e0, virtual true, abstract: false, final false
inline void DeserializeSyncVars(::Mirror::NetworkReader*  reader, bool  initialState) ;

/// @brief Method Initialize, addr 0x180405870, size 0x60, virtual false, abstract: false, final false
inline void Initialize() ;

/// @brief Method MirrorProcessed, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void MirrorProcessed() ;

static inline ::GlobalNamespace::PaintedBody* New_ctor() ;

/// @brief Method OnSetHead, addr 0x1804058d0, size 0x10, virtual false, abstract: false, final false
inline void OnSetHead(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnSetLegs, addr 0x1804058e0, size 0x10, virtual false, abstract: false, final false
inline void OnSetLegs(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method OnSetTorso, addr 0x1804058f0, size 0x10, virtual false, abstract: false, final false
inline void OnSetTorso(int32_t  oldValue, int32_t  newValue) ;

/// @brief Method SerializeSyncVars, addr 0x1803fa440, size 0x90, virtual true, abstract: false, final false
inline void SerializeSyncVars(::Mirror::NetworkWriter*  writer, bool  forceAll) ;

/// @brief Method ServerSetColors, addr 0x180405900, size 0x160, virtual false, abstract: false, final false
inline void ServerSetColors(int32_t  headId, int32_t  torsoId, int32_t  legsId) ;

/// @brief Method SetLook, addr 0x180405a60, size 0x100, virtual false, abstract: false, final false
inline void SetLook(::ArrayW<::UnityEngine::MeshRenderer*>  renderers, int32_t  colorIndex) ;

constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet> const& __cordl_internal_get_eyeSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerEyeSet>& __cordl_internal_get_eyeSet() ;

constexpr int32_t const& __cordl_internal_get_eyeSubmeshIndex() const;

constexpr int32_t& __cordl_internal_get_eyeSubmeshIndex() ;

constexpr int32_t const& __cordl_internal_get_headColorIndex() const;

constexpr int32_t& __cordl_internal_get_headColorIndex() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_headItself() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_headItself() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_headParts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_headParts() ;

constexpr int32_t const& __cordl_internal_get_legsColorIndex() const;

constexpr int32_t& __cordl_internal_get_legsColorIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_legsParts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_legsParts() ;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet> const& __cordl_internal_get_lookSet() const;

constexpr ::UnityW<::GlobalNamespace::PlayerLookSet>& __cordl_internal_get_lookSet() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_materialPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_materialPropertyBlock() ;

constexpr int32_t const& __cordl_internal_get_torsoColorIndex() const;

constexpr int32_t& __cordl_internal_get_torsoColorIndex() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>> const& __cordl_internal_get_torsoParts() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>& __cordl_internal_get_torsoParts() ;

constexpr void __cordl_internal_set_eyeSet(::UnityW<::GlobalNamespace::PlayerEyeSet>  value) ;

constexpr void __cordl_internal_set_eyeSubmeshIndex(int32_t  value) ;

constexpr void __cordl_internal_set_headColorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_headItself(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_headParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_legsColorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_legsParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

constexpr void __cordl_internal_set_lookSet(::UnityW<::GlobalNamespace::PlayerLookSet>  value) ;

constexpr void __cordl_internal_set_materialPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_torsoColorIndex(int32_t  value) ;

constexpr void __cordl_internal_set_torsoParts(::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  value) ;

/// @brief Method .ctor, addr 0x180405b60, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkheadColorIndex, addr 0x1803d5ab0, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworkheadColorIndex() ;

/// @brief Method get_NetworklegsColorIndex, addr 0x1803fa740, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworklegsColorIndex() ;

/// @brief Method get_NetworktorsoColorIndex, addr 0x1803fa750, size 0x10, virtual false, abstract: false, final false
inline int32_t get_NetworktorsoColorIndex() ;

/// @brief Method set_NetworkheadColorIndex, addr 0x180405b80, size 0x70, virtual false, abstract: false, final false
inline void set_NetworkheadColorIndex(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworklegsColorIndex, addr 0x180405bf0, size 0x70, virtual false, abstract: false, final false
inline void set_NetworklegsColorIndex(::ByRefConst<int32_t>  value) ;

/// @brief Method set_NetworktorsoColorIndex, addr 0x180405c60, size 0x70, virtual false, abstract: false, final false
inline void set_NetworktorsoColorIndex(::ByRefConst<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PaintedBody() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PaintedBody", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PaintedBody(PaintedBody && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PaintedBody", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PaintedBody(PaintedBody const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5084};

/// @brief Field headColorIndex, offset: 0x68, size: 0x4, def value: None
 int32_t  ___headColorIndex;

/// @brief Field torsoColorIndex, offset: 0x6c, size: 0x4, def value: None
 int32_t  ___torsoColorIndex;

/// @brief Field legsColorIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  ___legsColorIndex;

/// @brief Field headParts, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___headParts;

/// @brief Field headItself, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___headItself;

/// @brief Field eyeSubmeshIndex, offset: 0x88, size: 0x4, def value: None
 int32_t  ___eyeSubmeshIndex;

/// @brief Field torsoParts, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___torsoParts;

/// @brief Field legsParts, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::MeshRenderer>>  ___legsParts;

/// @brief Field lookSet, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerLookSet>  ___lookSet;

/// @brief Field eyeSet, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerEyeSet>  ___eyeSet;

/// @brief Field materialPropertyBlock, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___materialPropertyBlock;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PaintedBody, ___headColorIndex) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___torsoColorIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___legsColorIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___headParts) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___headItself) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___eyeSubmeshIndex) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___torsoParts) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___legsParts) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___lookSet) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___eyeSet) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PaintedBody, ___materialPropertyBlock) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PaintedBody) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace
