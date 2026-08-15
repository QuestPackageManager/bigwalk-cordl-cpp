#pragma once
// IWYU pragma private; include "System/Data/FunctionNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__ExpressionNode_def.hpp"
#include "System/Data/zzzz__Function_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FunctionNode)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Data {
class DataColumn;
}
namespace System::Data {
struct DataRowVersion;
}
namespace System::Data {
class DataRow;
}
namespace System::Data {
class DataTable;
}
namespace System::Data {
class ExpressionNode;
}
namespace System::Data {
struct FunctionId;
}
namespace System::Data {
class TypeLimiter;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class FunctionNode;
}
// Write type traits
MARK_REF_T(::System::Data::FunctionNode*);
DEFINE_IL2CPP_CLASS(::System::Data::FunctionNode*, "System.Data", "FunctionNode");
// Dependencies System.Data.ExpressionNode, System.Data.Function
namespace System::Data {
// Is value type: false
// CS Name: System.Data.FunctionNode
class CORDL_TYPE FunctionNode : public ::System::Data::ExpressionNode {
public:
// Declarations
 __declspec(property(get=get_Aggregate)) ::System::Data::FunctionId  Aggregate;

 __declspec(property(get=get_IsAggregate)) bool  IsAggregate;

/// @brief Field _argumentCount, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__argumentCount, put=__cordl_internal_set__argumentCount)) int32_t  _argumentCount;

/// @brief Field _arguments, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__arguments, put=__cordl_internal_set__arguments)) ::ArrayW<::System::Data::ExpressionNode*>  _arguments;

/// @brief Field _capturedLimiter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__capturedLimiter, put=__cordl_internal_set__capturedLimiter)) ::System::Data::TypeLimiter*  _capturedLimiter;

/// @brief Field _info, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__info, put=__cordl_internal_set__info)) int32_t  _info;

/// @brief Field _name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field s_funcs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_funcs, put=setStaticF_s_funcs)) ::ArrayW<::System::Data::Function*>  s_funcs;

/// @brief Method AddArgument, addr 0x181b7a7f0, size 0x130, virtual false, abstract: false, final false
inline void AddArgument(::System::Data::ExpressionNode*  argument) ;

/// @brief Method Bind, addr 0x181b7a920, size 0x2f0, virtual true, abstract: false, final false
inline void Bind(::System::Data::DataTable*  table, ::System::Collections::Generic::List_1<::System::Data::DataColumn*>*  list) ;

/// @brief Method Check, addr 0x181b7ac10, size 0x110, virtual false, abstract: false, final false
inline void Check() ;

/// @brief Method DependsOn, addr 0x181b7ad20, size 0x80, virtual true, abstract: false, final false
inline bool DependsOn(::System::Data::DataColumn*  column) ;

/// @brief Method Eval, addr 0x181b7c710, size 0x20, virtual true, abstract: false, final false
inline ::System::Object* Eval() ;

/// @brief Method Eval, addr 0x181b7c6e0, size 0x30, virtual true, abstract: false, final false
inline ::System::Object* Eval(::ArrayW<int32_t>  recordNos) ;

/// @brief Method Eval, addr 0x181b7c190, size 0x550, virtual true, abstract: false, final false
inline ::System::Object* Eval(::System::Data::DataRow*  row, ::System::Data::DataRowVersion  version) ;

/// @brief Method EvalFunction, addr 0x181b7ada0, size 0x13f0, virtual false, abstract: false, final false
inline ::System::Object* EvalFunction(::System::Data::FunctionId  id, ::ArrayW<::System::Object*>  argumentValues, ::System::Data::DataRow*  row, ::System::Data::DataRowVersion  version) ;

/// @brief Method GetDataType, addr 0x181b7c730, size 0x1b0, virtual false, abstract: false, final false
inline ::System::Type* GetDataType(::System::Data::ExpressionNode*  node) ;

/// @brief Method HasLocalAggregate, addr 0x181b7c8e0, size 0x70, virtual true, abstract: false, final false
inline bool HasLocalAggregate() ;

/// @brief Method HasRemoteAggregate, addr 0x181b7c950, size 0x70, virtual true, abstract: false, final false
inline bool HasRemoteAggregate() ;

/// @brief Method IsConstant, addr 0x181b7c9c0, size 0x70, virtual true, abstract: false, final false
inline bool IsConstant() ;

/// @brief Method IsTableConstant, addr 0x181b7ca30, size 0x70, virtual true, abstract: false, final false
inline bool IsTableConstant() ;

static inline ::System::Data::FunctionNode* New_ctor(::System::Data::DataTable*  table, ::StringW  name) ;

/// @brief Method Optimize, addr 0x181b7caa0, size 0x130, virtual true, abstract: false, final false
inline ::System::Data::ExpressionNode* Optimize() ;

constexpr int32_t const& __cordl_internal_get__argumentCount() const;

constexpr int32_t& __cordl_internal_get__argumentCount() ;

constexpr ::ArrayW<::System::Data::ExpressionNode*> const& __cordl_internal_get__arguments() const;

constexpr ::ArrayW<::System::Data::ExpressionNode*>& __cordl_internal_get__arguments() ;

constexpr ::System::Data::TypeLimiter* const& __cordl_internal_get__capturedLimiter() const;

constexpr ::System::Data::TypeLimiter*& __cordl_internal_get__capturedLimiter() ;

constexpr int32_t const& __cordl_internal_get__info() const;

constexpr int32_t& __cordl_internal_get__info() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr void __cordl_internal_set__argumentCount(int32_t  value) ;

constexpr void __cordl_internal_set__arguments(::ArrayW<::System::Data::ExpressionNode*>  value) ;

constexpr void __cordl_internal_set__capturedLimiter(::System::Data::TypeLimiter*  value) ;

constexpr void __cordl_internal_set__info(int32_t  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

/// @brief Method .ctor, addr 0x181b7d4c0, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::Data::DataTable*  table, ::StringW  name) ;

static inline ::ArrayW<::System::Data::Function*> getStaticF_s_funcs() ;

/// @brief Method get_Aggregate, addr 0x181b7d5b0, size 0x120, virtual false, abstract: false, final false
inline ::System::Data::FunctionId get_Aggregate() ;

/// @brief Method get_IsAggregate, addr 0x181b7d6d0, size 0xf0, virtual false, abstract: false, final false
inline bool get_IsAggregate() ;

static inline void setStaticF_s_funcs(::ArrayW<::System::Data::Function*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FunctionNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FunctionNode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FunctionNode(FunctionNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FunctionNode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FunctionNode(FunctionNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13943};

/// @brief Field _name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _info, offset: 0x20, size: 0x4, def value: None
 int32_t  ____info;

/// @brief Field _argumentCount, offset: 0x24, size: 0x4, def value: None
 int32_t  ____argumentCount;

/// @brief Field _arguments, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::System::Data::ExpressionNode*>  ____arguments;

/// @brief Field _capturedLimiter, offset: 0x30, size: 0x8, def value: None
 ::System::Data::TypeLimiter*  ____capturedLimiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Data::FunctionNode, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Data::FunctionNode, ____info) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Data::FunctionNode, ____argumentCount) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Data::FunctionNode, ____arguments) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Data::FunctionNode, ____capturedLimiter) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Data::FunctionNode) == 0x38, "Size mismatch!");

} // namespace end def System::Data
