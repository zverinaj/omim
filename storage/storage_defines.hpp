#pragma once

#include "std/cstdint.hpp"
#include "std/string.hpp"
#include "std/utility.hpp"

namespace storage
{
  /// Used in GUI
  enum class TStatus : uint8_t
  {
    EOnDisk = 0,      /**< Downloaded mwm(s) is up to date. No need to update it. */
    ENotDownloaded,   /**< Mwm can be download but not downloaded yet. */
    EDownloadFailed,  /**< Downloading failed because no internet connection. */
    EDownloading,     /**< Downloading a new mwm or updating an old one. */
    EInQueue,         /**< A mwm is waiting for downloading in the queue. */
    EUnknown,         /**< Downloading failed because of unknown error. */
    EOnDiskOutOfDate, /**< An update for a downloaded mwm is ready according to counties.txt. */
    EOutOfMemFailed,  /**< Downloading failed because it's not enough memory */
    EMixed,           /**< Descendants of a group node has different statuses. */
    EUndefined
  };

  string DebugPrint(TStatus status);

  typedef pair<uint64_t, uint64_t> LocalAndRemoteSizeT;
}  // namespace storage
