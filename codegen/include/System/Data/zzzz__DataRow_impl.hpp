#pragma once
// IWYU pragma private; include "System/Data/DataRow.hpp"
#include "System/Data/zzzz__DataRowAction_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__DataRow_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Data/zzzz__DataColumnCollection_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataError_def.hpp"
#include "System/Data/zzzz__DataKey_def.hpp"
#include "System/Data/zzzz__DataRelation_def.hpp"
#include "System/Data/zzzz__DataRowBuilder_def.hpp"
#include "System/Data/zzzz__DataRowState_def.hpp"
#include "System/Data/zzzz__DataRowVersion_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__DataViewRowState_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Data::DataRow._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataRowBuilder*)>(&::System::Data::DataRow::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b8bf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataRowBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_LastChangedColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_LastChangedColumn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b8c180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_LastChangedColumn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_LastChangedColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::set_LastChangedColumn)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b8c940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_LastChangedColumn", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_HasPropertyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_HasPropertyChanged)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b8c000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_HasPropertyChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_RBTreeNodeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_RBTreeNodeId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e0b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_RBTreeNodeId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_RBTreeNodeId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(int32_t)>(&::System::Data::DataRow::set_RBTreeNodeId)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b8c950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_RBTreeNodeId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_RowError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_RowError)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b8c190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_RowError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_RowError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::StringW)>(&::System::Data::DataRow::set_RowError)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x181b8c9b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_RowError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.RowErrorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::RowErrorChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b8b460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"RowErrorChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_rowID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_rowID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d97f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_rowID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_rowID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(int64_t)>(&::System::Data::DataRow::set_rowID)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b8cb10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_rowID", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_RowState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowState (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_RowState)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181b8c1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_RowState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_Table
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataTable* (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_Table)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802db4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_Table", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CheckForLoops
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::CheckForLoops)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b89a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CheckForLoops", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetNestedParentCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetNestedParentCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b8a6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetNestedParentCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::StringW, ::System::Object*)>(&::System::Data::DataRow::set_Item)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b8c600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::get_Item)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b8c0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*, ::System::Object*)>(&::System::Data::DataRow::set_Item)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x181b8c670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_Item", {}, {::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Data::DataRow::*)(::System::Data::DataColumn*, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::get_Item)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181b8c010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.set_ItemArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::ArrayW<::System::Object*>)>(&::System::Data::DataRow::set_ItemArray)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x181b8c300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_ItemArray", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.AcceptChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::AcceptChanges)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x181b896a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"AcceptChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.BeginEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::BeginEdit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b89940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"BeginEdit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.BeginEditInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRow::*)()>(&::System::Data::DataRow::BeginEditInternal)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x181b898a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"BeginEditInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CancelEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::CancelEdit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b89950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CancelEdit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CheckColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::CheckColumn)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181b899b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CheckColumn", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CheckInTable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::CheckInTable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b89b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CheckInTable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.Delete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::Delete)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b89f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"Delete", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.EndEdit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::EndEdit)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b89f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"EndEdit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetColumnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(int32_t, ::StringW)>(&::System::Data::DataRow::SetColumnError)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b8b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetColumnError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetColumnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*, ::StringW)>(&::System::Data::DataRow::SetColumnError)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x181b8b4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetColumnError", {}, {::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetColumnError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::GetColumnError)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181b8a230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetColumnError", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.ClearErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::ClearErrors)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b89b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"ClearErrors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.ClearError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataColumn*)>(&::System::Data::DataRow::ClearError)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b89b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"ClearError", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.get_HasErrors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRow::*)()>(&::System::Data::DataRow::get_HasErrors)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b8bfd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_HasErrors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetColumnsInError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataColumn*> (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetColumnsInError)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181b8a460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetColumnsInError", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetChildRows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRow*> (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::GetChildRows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b8a060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetChildRows", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetChildRows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRow*> (::System::Data::DataRow::*)(::System::Data::DataRelation*, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetChildRows)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181b8a070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetChildRows", {}, {::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetDataColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataColumn* (::System::Data::DataRow::*)(::StringW)>(&::System::Data::DataRow::GetDataColumn)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b8a580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetDataColumn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetParentRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::GetParentRow)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b8a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetParentRow", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetParentRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataRow::*)(::System::Data::DataRelation*, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetParentRow)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x181b8a870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetParentRow", {}, {::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetNestedParentRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRow* (::System::Data::DataRow::*)(::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetNestedParentRow)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x181b8a790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetNestedParentRow", {}, {::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetParentRows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRow*> (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::GetParentRows)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181b8ab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetParentRows", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetParentRows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Data::DataRow*> (::System::Data::DataRow::*)(::System::Data::DataRelation*, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetParentRows)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x181b8a990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetParentRows", {}, {::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetColumnValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Data::DataRow::*)(::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::DataRow::GetColumnValues)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181b8a3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetColumnValues", {}, {::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetColumnValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Data::DataRow::*)(::ArrayW<::System::Data::DataColumn*>, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetColumnValues)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b8a370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetColumnValues", {}, {::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetKeyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Data::DataRow::*)(::System::Data::DataKey)>(&::System::Data::DataRow::GetKeyValues)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x181b8a650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetKeyValues", {}, {::i2c::type_of<::System::Data::DataKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetKeyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Data::DataRow::*)(::System::Data::DataKey, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetKeyValues)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b8a6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetKeyValues", {}, {::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetCurrentRecordNo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetCurrentRecordNo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b8a550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetCurrentRecordNo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetDefaultRecord
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetDefaultRecord)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b8a5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetDefaultRecord", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetOriginalRecordNo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetOriginalRecordNo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b8a840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetOriginalRecordNo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetProposedRecordNo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRow::*)()>(&::System::Data::DataRow::GetProposedRecordNo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b8ab60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetProposedRecordNo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetRecordFromVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRow::*)(::System::Data::DataRowVersion)>(&::System::Data::DataRow::GetRecordFromVersion)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x181b8ab90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetRecordFromVersion", {}, {::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetDefaultRowVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataRowVersion (::System::Data::DataRow::*)(::System::Data::DataViewRowState)>(&::System::Data::DataRow::GetDefaultRowVersion)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b8a620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetDefaultRowVersion", {}, {::i2c::type_of<::System::Data::DataViewRowState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.GetRecordState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::DataViewRowState (::System::Data::DataRow::*)(int32_t)>(&::System::Data::DataRow::GetRecordState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181b8ac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetRecordState", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HasKeyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRow::*)(::System::Data::DataKey)>(&::System::Data::DataRow::HasKeyChanged)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181b8acb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HasKeyChanged", {}, {::i2c::type_of<::System::Data::DataKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HasKeyChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRow::*)(::System::Data::DataKey, ::System::Data::DataRowVersion, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::HasKeyChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181b8acf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HasKeyChanged", {}, {::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HasVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRow::*)(::System::Data::DataRowVersion)>(&::System::Data::DataRow::HasVersion)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181b8add0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HasVersion", {}, {::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HaveValuesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRow::*)(::ArrayW<::System::Data::DataColumn*>)>(&::System::Data::DataRow::HaveValuesChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181b8ae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HaveValuesChanged", {}, {::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.HaveValuesChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::DataRow::*)(::ArrayW<::System::Data::DataColumn*>, ::System::Data::DataRowVersion, ::System::Data::DataRowVersion)>(&::System::Data::DataRow::HaveValuesChanged)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x181b8af30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HaveValuesChanged", {}, {::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.RejectChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::RejectChanges)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x181b8b010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"RejectChanges", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.ResetLastChangedColumn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::ResetLastChangedColumn)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181b8b430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"ResetLastChangedColumn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetKeyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataKey, ::ArrayW<::System::Object*>)>(&::System::Data::DataRow::SetKeyValues)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x181b8b7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetKeyValues", {}, {::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetNestedParentRow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataRow*, bool)>(&::System::Data::DataRow::SetNestedParentRow)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x181b8b940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetNestedParentRow", {}, {::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetParentRowToDBNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)()>(&::System::Data::DataRow::SetParentRowToDBNull)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x181b8bbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetParentRowToDBNull", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.SetParentRowToDBNull
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::DataRow::*)(::System::Data::DataRelation*)>(&::System::Data::DataRow::SetParentRowToDBNull)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181b8be70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetParentRowToDBNull", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::DataRow.CopyValuesIntoStore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::DataRow::*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*, int32_t)>(&::System::Data::DataRow::CopyValuesIntoStore)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x181b89c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CopyValuesIntoStore", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Data::DataTable*& System::Data::DataRow::__cordl_internal_get__table()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____table;
}
constexpr ::System::Data::DataTable* const& System::Data::DataRow::__cordl_internal_get__table() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____table;
}
constexpr void System::Data::DataRow::__cordl_internal_set__table(::System::Data::DataTable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____table = value;
}
constexpr ::System::Data::DataColumnCollection*& System::Data::DataRow::__cordl_internal_get__columns()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____columns;
}
constexpr ::System::Data::DataColumnCollection* const& System::Data::DataRow::__cordl_internal_get__columns() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____columns;
}
constexpr void System::Data::DataRow::__cordl_internal_set__columns(::System::Data::DataColumnCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____columns = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__oldRecord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldRecord;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__oldRecord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____oldRecord;
}
constexpr void System::Data::DataRow::__cordl_internal_set__oldRecord(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____oldRecord = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__newRecord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newRecord;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__newRecord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newRecord;
}
constexpr void System::Data::DataRow::__cordl_internal_set__newRecord(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____newRecord = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__tempRecord()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempRecord;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__tempRecord() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tempRecord;
}
constexpr void System::Data::DataRow::__cordl_internal_set__tempRecord(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tempRecord = value;
}
constexpr int64_t& System::Data::DataRow::__cordl_internal_get__rowID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowID;
}
constexpr int64_t const& System::Data::DataRow::__cordl_internal_get__rowID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rowID;
}
constexpr void System::Data::DataRow::__cordl_internal_set__rowID(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rowID = value;
}
constexpr ::System::Data::DataRowAction& System::Data::DataRow::__cordl_internal_get__action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____action;
}
constexpr ::System::Data::DataRowAction const& System::Data::DataRow::__cordl_internal_get__action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____action;
}
constexpr void System::Data::DataRow::__cordl_internal_set__action(::System::Data::DataRowAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____action = value;
}
constexpr bool& System::Data::DataRow::__cordl_internal_get__inChangingEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inChangingEvent;
}
constexpr bool const& System::Data::DataRow::__cordl_internal_get__inChangingEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inChangingEvent;
}
constexpr void System::Data::DataRow::__cordl_internal_set__inChangingEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inChangingEvent = value;
}
constexpr bool& System::Data::DataRow::__cordl_internal_get__inDeletingEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inDeletingEvent;
}
constexpr bool const& System::Data::DataRow::__cordl_internal_get__inDeletingEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inDeletingEvent;
}
constexpr void System::Data::DataRow::__cordl_internal_set__inDeletingEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inDeletingEvent = value;
}
constexpr bool& System::Data::DataRow::__cordl_internal_get__inCascade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inCascade;
}
constexpr bool const& System::Data::DataRow::__cordl_internal_get__inCascade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inCascade;
}
constexpr void System::Data::DataRow::__cordl_internal_set__inCascade(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inCascade = value;
}
constexpr ::System::Data::DataColumn*& System::Data::DataRow::__cordl_internal_get__lastChangedColumn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastChangedColumn;
}
constexpr ::System::Data::DataColumn* const& System::Data::DataRow::__cordl_internal_get__lastChangedColumn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastChangedColumn;
}
constexpr void System::Data::DataRow::__cordl_internal_set__lastChangedColumn(::System::Data::DataColumn*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastChangedColumn = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__countColumnChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countColumnChange;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__countColumnChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____countColumnChange;
}
constexpr void System::Data::DataRow::__cordl_internal_set__countColumnChange(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____countColumnChange = value;
}
constexpr ::System::Data::DataError*& System::Data::DataRow::__cordl_internal_get__error()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
constexpr ::System::Data::DataError* const& System::Data::DataRow::__cordl_internal_get__error() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____error;
}
constexpr void System::Data::DataRow::__cordl_internal_set__error(::System::Data::DataError*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____error = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__rbTreeNodeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rbTreeNodeId;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__rbTreeNodeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rbTreeNodeId;
}
constexpr void System::Data::DataRow::__cordl_internal_set__rbTreeNodeId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rbTreeNodeId = value;
}
constexpr int32_t& System::Data::DataRow::__cordl_internal_get__objectID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectID;
}
constexpr int32_t const& System::Data::DataRow::__cordl_internal_get__objectID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____objectID;
}
constexpr void System::Data::DataRow::__cordl_internal_set__objectID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____objectID = value;
}
inline void System::Data::DataRow::setStaticF_s_objectTypeCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataRow*>(std::forward<int32_t>(value));
}
inline int32_t System::Data::DataRow::getStaticF_s_objectTypeCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_objectTypeCount", ::System::Data::DataRow*>();
}
inline void System::Data::DataRow::_ctor(::System::Data::DataRowBuilder*  builder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Data::DataRowBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline ::System::Data::DataColumn* System::Data::DataRow::get_LastChangedColumn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_LastChangedColumn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method);
}
inline void System::Data::DataRow::set_LastChangedColumn(::System::Data::DataColumn*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_LastChangedColumn", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Data::DataRow::get_HasPropertyChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_HasPropertyChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::get_RBTreeNodeId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_RBTreeNodeId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::DataRow::set_RBTreeNodeId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_RBTreeNodeId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Data::DataRow::get_RowError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_RowError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Data::DataRow::set_RowError(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_RowError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataRow::RowErrorChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"RowErrorChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int64_t System::Data::DataRow::get_rowID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_rowID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Data::DataRow::set_rowID(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_rowID", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::DataRowState System::Data::DataRow::get_RowState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_RowState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowState>(this, ___internal_method);
}
inline ::System::Data::DataTable* System::Data::DataRow::get_Table()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_Table", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*>(this, ___internal_method);
}
inline void System::Data::DataRow::CheckForLoops(::System::Data::DataRelation*  rel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CheckForLoops", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rel);
}
inline int32_t System::Data::DataRow::GetNestedParentCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetNestedParentCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::DataRow::set_Item(::StringW  columnName, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_Item", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columnName, value);
}
inline ::System::Object* System::Data::DataRow::get_Item(::System::Data::DataColumn*  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, column);
}
inline void System::Data::DataRow::set_Item(::System::Data::DataColumn*  column, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_Item", {}, {::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, value);
}
inline ::System::Object* System::Data::DataRow::get_Item(::System::Data::DataColumn*  column, ::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_Item", {}, {::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, column, version);
}
inline void System::Data::DataRow::set_ItemArray(::ArrayW<::System::Object*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"set_ItemArray", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Data::DataRow::AcceptChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"AcceptChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::BeginEdit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"BeginEdit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Data::DataRow::BeginEditInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"BeginEditInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::DataRow::CancelEdit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CancelEdit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::CheckColumn(::System::Data::DataColumn*  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CheckColumn", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline void System::Data::DataRow::CheckInTable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CheckInTable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::Delete()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"Delete", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::EndEdit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"EndEdit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::SetColumnError(int32_t  columnIndex, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetColumnError", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, columnIndex, error);
}
inline void System::Data::DataRow::SetColumnError(::System::Data::DataColumn*  column, ::StringW  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetColumnError", {}, {::i2c::type_of<::System::Data::DataColumn*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column, error);
}
inline ::StringW System::Data::DataRow::GetColumnError(::System::Data::DataColumn*  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetColumnError", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, column);
}
inline void System::Data::DataRow::ClearErrors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"ClearErrors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::ClearError(::System::Data::DataColumn*  column)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"ClearError", {}, {::i2c::type_of<::System::Data::DataColumn*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, column);
}
inline bool System::Data::DataRow::get_HasErrors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"get_HasErrors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataColumn*> System::Data::DataRow::GetColumnsInError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetColumnsInError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Data::DataRow*> System::Data::DataRow::GetChildRows(::System::Data::DataRelation*  relation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetChildRows", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*>>(this, ___internal_method, relation);
}
inline ::ArrayW<::System::Data::DataRow*> System::Data::DataRow::GetChildRows(::System::Data::DataRelation*  relation, ::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetChildRows", {}, {::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*>>(this, ___internal_method, relation, version);
}
inline ::System::Data::DataColumn* System::Data::DataRow::GetDataColumn(::StringW  columnName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetDataColumn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*>(this, ___internal_method, columnName);
}
inline ::System::Data::DataRow* System::Data::DataRow::GetParentRow(::System::Data::DataRelation*  relation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetParentRow", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, relation);
}
inline ::System::Data::DataRow* System::Data::DataRow::GetParentRow(::System::Data::DataRelation*  relation, ::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetParentRow", {}, {::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, relation, version);
}
inline ::System::Data::DataRow* System::Data::DataRow::GetNestedParentRow(::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetNestedParentRow", {}, {::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRow*>(this, ___internal_method, version);
}
inline ::ArrayW<::System::Data::DataRow*> System::Data::DataRow::GetParentRows(::System::Data::DataRelation*  relation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetParentRows", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*>>(this, ___internal_method, relation);
}
inline ::ArrayW<::System::Data::DataRow*> System::Data::DataRow::GetParentRows(::System::Data::DataRelation*  relation, ::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetParentRows", {}, {::i2c::type_of<::System::Data::DataRelation*>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataRow*>>(this, ___internal_method, relation, version);
}
inline ::ArrayW<::System::Object*> System::Data::DataRow::GetColumnValues(::ArrayW<::System::Data::DataColumn*>  columns)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetColumnValues", {}, {::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, columns);
}
inline ::ArrayW<::System::Object*> System::Data::DataRow::GetColumnValues(::ArrayW<::System::Data::DataColumn*>  columns, ::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetColumnValues", {}, {::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, columns, version);
}
inline ::ArrayW<::System::Object*> System::Data::DataRow::GetKeyValues(::System::Data::DataKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetKeyValues", {}, {::i2c::type_of<::System::Data::DataKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, key);
}
inline ::ArrayW<::System::Object*> System::Data::DataRow::GetKeyValues(::System::Data::DataKey  key, ::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetKeyValues", {}, {::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, key, version);
}
inline int32_t System::Data::DataRow::GetCurrentRecordNo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetCurrentRecordNo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::GetDefaultRecord()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetDefaultRecord", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::GetOriginalRecordNo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetOriginalRecordNo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::GetProposedRecordNo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetProposedRecordNo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::DataRow::GetRecordFromVersion(::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetRecordFromVersion", {}, {::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, version);
}
inline ::System::Data::DataRowVersion System::Data::DataRow::GetDefaultRowVersion(::System::Data::DataViewRowState  viewState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetDefaultRowVersion", {}, {::i2c::type_of<::System::Data::DataViewRowState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataRowVersion>(this, ___internal_method, viewState);
}
inline ::System::Data::DataViewRowState System::Data::DataRow::GetRecordState(int32_t  record)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"GetRecordState", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataViewRowState>(this, ___internal_method, record);
}
inline bool System::Data::DataRow::HasKeyChanged(::System::Data::DataKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HasKeyChanged", {}, {::i2c::type_of<::System::Data::DataKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline bool System::Data::DataRow::HasKeyChanged(::System::Data::DataKey  key, ::System::Data::DataRowVersion  version1, ::System::Data::DataRowVersion  version2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HasKeyChanged", {}, {::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, version1, version2);
}
inline bool System::Data::DataRow::HasVersion(::System::Data::DataRowVersion  version)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HasVersion", {}, {::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, version);
}
inline bool System::Data::DataRow::HaveValuesChanged(::ArrayW<::System::Data::DataColumn*>  columns)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HaveValuesChanged", {}, {::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, columns);
}
inline bool System::Data::DataRow::HaveValuesChanged(::ArrayW<::System::Data::DataColumn*>  columns, ::System::Data::DataRowVersion  version1, ::System::Data::DataRowVersion  version2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"HaveValuesChanged", {}, {::i2c::type_of<::ArrayW<::System::Data::DataColumn*>>(), ::i2c::type_of<::System::Data::DataRowVersion>(), ::i2c::type_of<::System::Data::DataRowVersion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, columns, version1, version2);
}
inline void System::Data::DataRow::RejectChanges()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"RejectChanges", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::ResetLastChangedColumn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"ResetLastChangedColumn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::SetKeyValues(::System::Data::DataKey  key, ::ArrayW<::System::Object*>  keyValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetKeyValues", {}, {::i2c::type_of<::System::Data::DataKey>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, keyValues);
}
inline void System::Data::DataRow::SetNestedParentRow(::System::Data::DataRow*  parentRow, bool  setNonNested)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetNestedParentRow", {}, {::i2c::type_of<::System::Data::DataRow*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentRow, setNonNested);
}
inline void System::Data::DataRow::SetParentRowToDBNull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetParentRowToDBNull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Data::DataRow::SetParentRowToDBNull(::System::Data::DataRelation*  relation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"SetParentRowToDBNull", {}, {::i2c::type_of<::System::Data::DataRelation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relation);
}
inline int32_t System::Data::DataRow::CopyValuesIntoStore(::System::Collections::ArrayList*  storeList, ::System::Collections::ArrayList*  nullbitList, int32_t  storeIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Data::DataRow*>(),
                        {"CopyValuesIntoStore", {}, {::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<::System::Collections::ArrayList*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, storeList, nullbitList, storeIndex);
}
inline ::System::Data::DataRow* System::Data::DataRow::New_ctor(::System::Data::DataRowBuilder*  builder)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::DataRow*>(builder));
}
// Ctor Parameters []
constexpr ::System::Data::DataRow::DataRow()   {
}
