#pragma once
// IWYU pragma private; include "Epic/OnlineServices/ProgressionSnapshot/ProgressionSnapshotInterface.hpp"
#include "Epic/OnlineServices/zzzz__Handle_impl.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__ProgressionSnapshotInterface_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__AddProgressionOptions_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__BeginSnapshotOptions_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__DeleteSnapshotOptions_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__EndSnapshotOptions_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__OnDeleteSnapshotCallback_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__OnSubmitSnapshotCallback_def.hpp"
#include "Epic/OnlineServices/ProgressionSnapshot/zzzz__SubmitSnapshotOptions_def.hpp"
#include "Epic/OnlineServices/zzzz__Result_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::*)()>(&::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::*)(::System::IntPtr)>(&::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804f0510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface.AddProgression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>)>(&::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::AddProgression)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1804ff960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"AddProgression", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface.BeginSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions>, ::by_ref<uint32_t>)>(&::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::BeginSnapshot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1804ffa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"BeginSnapshot", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface.DeleteSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>, ::System::Object*, ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback*)>(&::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::DeleteSnapshot)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x1804ffa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"DeleteSnapshot", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface.EndSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Epic::OnlineServices::Result (::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>)>(&::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::EndSnapshot)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1804ffc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"EndSnapshot", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface.SubmitSnapshot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::*)(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>, ::System::Object*, ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*)>(&::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::SubmitSnapshot)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x1804ffcc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"SubmitSnapshot", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::_ctor(::System::IntPtr  innerHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerHandle);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::AddProgression(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"AddProgression", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::AddProgressionOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::BeginSnapshot(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions>  options, ::by_ref<uint32_t>  outSnapshotId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"BeginSnapshot", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::BeginSnapshotOptions>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options, outSnapshotId);
}
inline void Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::DeleteSnapshot(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"DeleteSnapshot", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::DeleteSnapshotOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::ProgressionSnapshot::OnDeleteSnapshotCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::Result Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::EndSnapshot(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>  options)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"EndSnapshot", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::EndSnapshotOptions>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Epic::OnlineServices::Result>(this, ___internal_method, options);
}
inline void Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::SubmitSnapshot(::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>  options, ::System::Object*  clientData, ::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*  completionDelegate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(),
                        {"SubmitSnapshot", {}, {::i2c::type_of<::by_ref<::Epic::OnlineServices::ProgressionSnapshot::SubmitSnapshotOptions>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Epic::OnlineServices::ProgressionSnapshot::OnSubmitSnapshotCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, options, clientData, completionDelegate);
}
inline ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface* Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>());
}
inline ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface* Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::New_ctor(::System::IntPtr  innerHandle)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface*>(innerHandle));
}
// Ctor Parameters []
constexpr ::Epic::OnlineServices::ProgressionSnapshot::ProgressionSnapshotInterface::ProgressionSnapshotInterface()   {
}
